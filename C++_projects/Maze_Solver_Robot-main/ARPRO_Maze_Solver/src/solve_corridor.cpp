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

    void childFinder2(int &x1, int &y1, int dir)
    {   Position goal = Position::maze.end();
        while(1)
        {
            if(checker(x1, y1) != 2 or(x1 == goal.x and y1 == goal.y))
                break;
            else
                move2FreeSpace(x1,y1,dir);
        }
    }

    std::vector<PositionPtr> children()
    {
        // this method should return  all positions reachable from this one
        std::vector<PositionPtr> generated;

        for(int dir = 0; dir < 4; dir++)
        {   int x1 = x, y1 = y;
            switch (dir) {
            case 0:     // upwards
                y1--;
                break;
            case 1:     // leftwards
                x1--;
                break;
            case 2:     // downwards
                y1++;
                break;
            case 3:     // rightwards
                x1++;
                break;
            }
            if(maze.isFree(x1,y1))
            {
                childFinder2(x1, y1, dir);
                generated.push_back(std::make_unique<Position>(x1,y1));
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
    cout << "End @ (" << goal.x << ", " << goal.y << ")"<< endl;

    bool isCorridor = true;
    // call A* algorithm
    ecn::Astar(start, goal, isCorridor);

    // save final image
    Position::maze.saveSolution("corridor");
    cv::waitKey(0);

}
