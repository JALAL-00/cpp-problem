// Find the third angle of a triangle
#include<iostream>
using namespace std;
int main(){
    int ang1, ang2, ang3;
    cout<<"Enter 1st angle of triangle: ";
    cin>>ang1;
    cout<<"Enter 2nd angle of triangle: ";
    cin>>ang2;

    ang3 = 180 - (ang1 + ang2);
    cout<<"Third of triangle is: "<<ang3<<endl;
    cout<<endl;
    return 0;
}