//Converts kilometers per hour to miles per hour

#include<iostream>
using namespace std;
int main(){
    int kmph, miph;
    cout<<"Enter the distance in kilometer: ";
    cin>>kmph;
    miph = (kmph * 0.6213712);
    cout<<" The "<< kmph <<" km./hr. means "<< miph << " Miles/hr. "<<endl;
    cout<<endl;
    return 0;
}