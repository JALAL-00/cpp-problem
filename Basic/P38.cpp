#include<iostream>
using namespace std;
int main(){
    int a;
    int i = 0;
    cout<<"Enter number: ";
    cin>>a;
    for(int i =1; i<=10; i++){
        cout<< a <<" X "<<i<<" = "<< a * i<<" "<<endl;
    }

    return 0;
}