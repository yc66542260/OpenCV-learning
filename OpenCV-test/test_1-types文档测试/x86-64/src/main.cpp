
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{   
    cout << "hello world" << endl;
    Point point_A;    //是整型的
	point_A.x = 5;    //如果是5.2，输出也是 5
	point_A.y = 2;
	cout << point_A << endl;  //输出的是 [5,2]
    

    return 0;
}

