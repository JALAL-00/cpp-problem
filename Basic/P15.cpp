//Calculate the volume of a cube
#include<iostream>
using namespace std;
int main(){
    int vol;
    int volCu;
    cout<<"Input the size of a cube: ";
    cin>>vol;
    volCu = (vol* vol *vol);
    cout<<"The volume of a cube is: "<<volCu;

    return 0;
}
