//Compute quotient and remainder

#include<iostream>
using namespace std;
int main(){
    int dividend, divisor, quotient, remainder;
    cout<<"Input dividend: ";
    cin>>dividend;
    cout<<"Input divisor: ";
    cin>>divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout<<" The quotient of the division is : "<< quotient << endl;
    cout<<" The remainder of the division is : "<< remainder << endl;
    cout << endl;
    return 0;
}