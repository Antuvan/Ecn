#include <point.h>
#include <maze.h>

using std::min;
using std::max;

namespace ecn
{

Maze Point::maze;

// final print
// maze deals with the color, just tell the points
void Point::print(const Point &parent, bool isCorridor)
{
    if (!isCorridor)
    {
        int x_incr(0), y_incr(0);
        if(x - parent.x)
            x_incr = x - parent.x > 0 ? 1 : -1;
        else
            y_incr = y - parent.y > 0 ? 1 : -1;

        int k = 1;
        while(parent.x + k*x_incr != x || parent.y + k*y_incr != y)
        {
            maze.passThrough(parent.x + k*x_incr,
                             parent.y + k*y_incr);
            k++;
        }}

    //        Changes begin
    else
    {
        for(int dir = 0; dir < 4; dir++)
        {   int x1 = x, y1 = y;     std::vector<PositionPtr> generated;
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
            if(maze.isFree(x1,y1)){
                childFinder(x1, y1, dir, generated);
                if(x1 == parent.x and y1 == parent.y){
                    for(int j = 0; j<generated.size();j++)
                        maze.passThrough(generated[j]->x, generated[j]->y);
                    break;  }
            }
        }}

    //Changes end
    maze.passThrough(x, y);
}

void Point::start()
{
    maze.write(x, y);
}

// online print, color depends on closed / open set
void Point::show(bool closed, const Point & parent)
{
    const int b = closed?255:0, r = closed?0:255;
    if(x != parent.x)
        for(int i = min(x, parent.x); i <= max(x, parent.x);++i)
            maze.write(i, y, r, 0, b, false);
    else
        for(int j = min(y, parent.y); j <= max(y, parent.y);++j)
            maze.write(x, j, r, 0, b, false);
    maze.write(x, y, r, 0, b);
}
//new functions
void Point::childFinder(int &x1, int &y1, int dir, std::vector<PositionPtr> &generated)
{   generated.push_back(std::make_unique<Point>(x1,y1));
    while(1)
    {
        if(checker(x1, y1) != 2)
            break;
        else{
            move2FreeSpace(x1,y1,dir);  generated.push_back(std::make_unique<Point>(x1,y1));}
    }
}

int Point::checker(int x1, int y1)
{   int check = 0;
    maze.isFree(x1-1, y1) ? check++ : check += 0;
    maze.isFree(x1+1, y1) ? check++ : check += 0;
    maze.isFree(x1, y1-1) ? check++ : check += 0;
    maze.isFree(x1, y1+1) ? check++ : check += 0;
    return check;
}

void Point::move2FreeSpace(int &x1, int &y1, int &dir)
{
    int check[4];
    maze.isFree(x1, y1-1) ? check[0] = 0 : check[0] = 5;
    maze.isFree(x1-1, y1) ? check[1] = 1 : check[1] = 5;
    maze.isFree(x1, y1+1) ? check[2] = 2 : check[2] = 5;
    maze.isFree(x1+1, y1) ? check[3] = 3 : check[3] = 5;
    dir - 2 < 0 ? dir += 2 : dir -= 2;  // opposite to og direction
    for (int i = 0; i < 4; i++) {
        if(check[i] == i and i != dir)
        {
            switch (i) {
            case 0:     // upwards
                y1--;   dir = 0;
                break;
            case 1:     // leftwards
                x1--;   dir = 1;
                break;
            case 2:     // downwards
                y1++;   dir = 2;
                break;
            case 3:     // rightwards
                x1++;   dir = 3;
                break;
            }
            break;
        }
    }
}


}
