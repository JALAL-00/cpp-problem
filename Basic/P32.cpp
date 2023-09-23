//Check whether a number is positive, negative or zero
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for check Positive, Negative or zero: ";
    cin>>num;
    if(num>0){
        cout<<"The number is positive ";
    }
    else if(num<0){
        cout<<"The number is negative ";
    }
    else{
        cout<<"The number is zero";
    }


    return 0;
}