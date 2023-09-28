//P-42 number
//program that accepts the user's first and last name and prints them in reverse order with a space between them.
#include<iostream>
using namespace std;
int main(){
    string FirstName;
    string LastName;
    cout<<"Enter your first name: ";
    cin>>FirstName;
    cout<<"Enter your last name: ";
    cin>>LastName;
    cout<<"Name in reverse is: "<<LastName<<" "<<FirstName;

    return 0;

}