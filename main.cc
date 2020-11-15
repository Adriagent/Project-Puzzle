#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main(){

    cout<<"Lena esta to buena\n";
    Mat pene=imread("lena.jpg");
    imshow("Imagen de Lena", pene);

    waitKey(0);

    return 0;
}