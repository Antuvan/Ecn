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

    std::vector<PositionPtr> children()
    {
        // this method should return  all positions reachable from this one
        std::vector<PositionPtr> generated;

        for (int x1 = x-1; x1 <= x+1; x1++)
        {
            if(x1 >= 0 and x1 < maze.width())
            {
                if(maze.isFree(x1, y))
                    generated.push_back(std::make_unique<Position>(x1,y));
            }
        }
        for (int y1 = y-1; y1 <= y+1; y1++)
        {
            if(y1 >= 0 and y1 < maze.height())
            {
                if(maze.isFree(x, y1))
                    generated.push_back(std::make_unique<Position>(x,y1));
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
    Position::maze.saveSolution("cell");
    cv::waitKey(0);

}
