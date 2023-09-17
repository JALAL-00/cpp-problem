//Ex-7. Display various type or arithmetic operation using mixed data type
#include<iostream>
using namespace std;
int main(){
    int a1 = 5, a2 = 10;
    double b1 = 3.7, b2 = 8.0;

    cout <<" "<< a1 << " + " << a2 << " = " << a1+a2 << endl;
    cout <<" "<< b1 << " + " << b2 << " = " << b1+b2 << endl;
    cout <<" "<< a1 << " + " << b2 << " = " << a1+b2 << endl;

    cout <<" "<< a1 << " - " << a2 << " = " << a1-a2 << endl;
    cout<< " "<< b1 << " - " << b2 << " = " << b1-b2 << endl;
    cout<< " "<< a1 << "- " << b2 << " = " << a1-b2 << endl;

    cout <<" "<< a1 << " * " << a2 << " = " << a1*a2 << endl;
    cout<<"  "<< b1 << " * " << b2 << " = " << b1*b2 << endl;
    cout<<" "<< a1 << " * " << b2 << " = " << a1*b2 <<endl;

    cout<<" "<< a1 << " / " << a2 << " = " << a1/a2 <<endl;
    cout<<" "<< b1 << " / " << b1 << " = " << b1/b2 <<endl;
    cout<<" "<< a1 << " / " << b2 <<" = " <<a1/b2 <<endl;

    return 0;

}