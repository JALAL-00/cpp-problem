//Divide two numbers and print on the screen
#include<iostream>
using namespace std;
int main(){
    int num1, num2, devide;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    devide = num1 / num2;

    cout<<"The quotient of "<< num1 <<" "<<"and "<< num2<<" is "<< devide;

    return 0;
}