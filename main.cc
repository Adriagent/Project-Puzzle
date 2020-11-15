#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main(){
    // + Doctor
    cout<<"Lena esta to buena\n";
    Mat pene=imread("lena.jpg");
    imshow("Imagen de Lena", pene);
 // Erase una vez una caca cacota cacona que vivia en el campo
 // rodeada de caca caquita cacuna 
    waitKey(0);

    cout<<"Diego mola";


    return 0;
}