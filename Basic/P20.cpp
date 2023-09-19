//Convert temperature in Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main(){
    float cel, far;
    cout<<"Input the temperature in celsius: ";
    cin>>cel;
    far = (9.0/5.0)*cel+32;
    cout << " The temperature in Celsius    : " << cel << endl;
    cout << " The temperature in Fahrenheit : " << far << endl;
}