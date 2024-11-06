#ifndef IMAGESAVER_H
#define IMAGESAVER_H

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <Node.h>
#define size 600
using cv::Mat;

class imagesaver
{
public:
    imagesaver(Node *nodes, int width, int height, char *percent)
    {
        Nodes = nodes;      Width = width;      Height = height;
        sscanf( percent, "%f", &removalPercent );
        img = Mat::zeros( Height, Width, CV_8UC1);
        imsaver();
    }
    void imsaver();
    void imdraw();
    void wallRemover();
    void dig(int x, int y)
    {
        img.at<uchar>(y,x) = 255;
    }
    int walls = 0;
protected:
    Node *Nodes;
    int Width, Height;
    Mat img;
    float removalPercent;
};

#endif // IMAGESAVER_H
