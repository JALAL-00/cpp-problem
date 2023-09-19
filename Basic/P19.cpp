//Find the area and circumference of a circle
//circumference C = 2*Pie*r, area A= Pie*r^2;
#include<iostream>
#define PI 3.1416
using namespace std;
int main(){
    float r, area, circum;
    cout<<"Input the r of a circle: ";
    cin>>r;
    circum = 2*PI*r;
    area = PI*(r * r);
    cout<<"The area of a circle is: "<<area;
    cout<<"The circumference of the circle is :"<<r;


    return 0;
}