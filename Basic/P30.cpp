//Compute the total and average of four numbers

#include<iostream>
using namespace std;
int main(){
    float total, average;
    float n1, n2, n3, n4;
    cout<<"Input 1st 2 number: ";
    cin>>n1>>n2;
    cout<<"Input last 2 number: ";
    cin>>n3>>n4;
    total = n1 + n2 + n3 + n4;
    average = total / 4;
    cout<<"The total of four number is: "<<total<<endl;
    cout<<"The aveage of four number is: "<<average<<endl;

    return 0;
}