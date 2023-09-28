//Swap the values of two variables not using third variable
#include<iostream>
using namespace std;
int main(){
    int a, b, teamp;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    b = b + a;
    a = b - a;
    b = b -a;
    cout << " After swapping the 1st number is : "<< a <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< b <<"\n\n" ;
    return 0;
}