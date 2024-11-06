#include "imagesaver.h"
using std::cout;    using std::cin;     using std::endl;
using cv::Mat;  using cv::Point;

void imagesaver::imsaver()
{
    imdraw();

    wallRemover();

    bool check = imwrite("../mazes/maze.png", img);

    if (check == false)
        cout << "Saving the image, FAILED" << endl;
    else
        cout << "Successfully saved the image. " << endl;

}

void imagesaver::imdraw()
{
    int i, j;

    for ( i = 0; i < Height; i++ )
    {
        for ( j = 0; j < Width; j++ )
        {
            printf( "%c", Nodes[j + i * Width].c );
            if (Nodes[j + i * Width].c == ' ')
            {
                img.at<uchar>(i, j) = 255;
            }
            else
                walls += 1;
        }
        printf( "\n" );
    }
}

void imagesaver::wallRemover()
{
    int wallsRemove = walls * removalPercent;
    std::srand(time(NULL));
    while(wallsRemove)
    {
        int randpx = rand() % (Height * Width);

        int i = randpx / Width;
        int j = randpx % Width;
        // Save the external walls
        if (i != 0 and j != 0 and i != Height-1 and j != Width-1)
        {
            img.at<uchar>(i, j) = 255;
            if(Nodes[randpx].c == '#')
            {
                wallsRemove -= 1;
                walls -= 1;
            }
        }

    }
}
