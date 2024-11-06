#include <a_star.h>
#include <maze.h>

using namespace std;
using namespace ecn;

// a node is a x-y position, we move from 1 each time
class Position : public Point
{
    typedef std::unique_ptr<Position> PositionPtr;

public:
    // constructor from coordinates
    Position(int _x, int _y) : Point(_x, _y) {}

    // constructor from base ecn::Point
    Position(ecn::Point p) : Point(p.x, p.y) {}

    int distToParent()
    {
        // in cell-based motion, the distance to the parent is always 1
        return 1;
    }

    bool is_xline(int x1, int y1)
    {
        if (maze.isFree(x1+1, y1) and maze.isFree(x1-1, y1) and !maze.isFree(x1, y1+1) and !maze.isFree(x1, y1-1))
            return true;
        return false;
    }
    bool is_yline(int x1, int y1)
    {
        if (maze.isFree(x1, y1+1) and maze.isFree(x1, y1-1) and !maze.isFree(x1+1, y1) and !maze.isFree(x1-1, y1))
            return true;
        return false;
    }

    std::vector<PositionPtr> children()
    {
        // this method should return  all positions reachable from this one
        std::vector<PositionPtr> generated;

        int x1 = x, y1 = y;
        bool right = true, down = true;
        int rightMoved = 0, downMoved = 0;
        bool check = 0;
        // left & right line check
        while(1)
        {
                if (!is_xline(x1, y))
                    generated.push_back(std::make_unique<Position>(x1,y));
                rightMoved++;
                right == true ? x1++ : x1--;

                if (!maze.isFree(x1, y))
                {   if(check == 1)    break;
                    else  check = 1;
                    right = false;   x1 -= rightMoved;
                }
        }
        check = 0;
        // up & down line check
        while(1)
        {
                if (!is_yline(x, y1))
                    generated.push_back(std::make_unique<Position>(x,y1));
                downMoved++;
                down == true ? y1++ : y1-- ;

                if (!maze.isFree(x, y1))
                {   if(check == 1)    break;
                    else  check = 1;
                    down = false;   y1 -= downMoved;
                }
        }
        return generated;
    }
};




int main( int argc, char **argv )
{
    // load file
    std::string filename = "../mazes/maze.png";
    if(argc == 2)
        filename = std::string(argv[1]);

    // let Point know about this maze
    Position::maze.load(filename);

    // initial and goal positions as Position's
    Position start = Position::maze.start(),
            goal = Position::maze.end();

    bool isCorridor = false;
    // call A* algorithm
    ecn::Astar(start, goal, isCorridor);

    // save final image
    Position::maze.saveSolution("line");
    cv::waitKey(0);

}
