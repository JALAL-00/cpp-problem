//calculates the volume of a cylinder
#include<iostream>
using namespace std;
int main(){
    int r, h;
    float volC;
    cout<<"Input radius of the cylinder: ";
    cin>>r;
    cout<<"Input height of the cylinder: ";
    cin>>h;

    volC = (3.1416*r*r*h);
    cout<<"The volume of a cylinder is: "<<volC;

    return 0;
}