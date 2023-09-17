//calculates the volume of a sphere.
#include<iostream>
using namespace std;
int main(){
    int rad;
    float volsp;
    cout<<"Input the radius of sphere: ";
    cin>>rad;
    volsp = ((4*3.1416*rad*rad*rad)/3);
    cout<<"The volume of a sphere is : "<< volsp << endl;

    return 0;
}