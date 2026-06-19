#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main()
{
    int length,t;
    double width,radius;
    double red_area, green_area;
    cin>> t;

    double PI = 2*acos(0.0);

    for(int i=0; i<t;i++)
    {
        cin>> length;
        width = (6/10.0)*length;
        radius = (1/5.0)*length;

        red_area = PI* radius*radius;
        green_area = length*width - (red_area);
    cout<<fixed<<setprecision(2)<<red_area<<" "<<green_area<<endl;
}
    return 0;
       
    }
     