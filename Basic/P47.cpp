//Calculate the sum of all even and odd numbers in an array
#include<iostream>
using namespace std;
int main(){
    int arr[100], n, even = 0, odd = 0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter elemets of an array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
    if(arr[i]%2==0){
        even = even + arr[i];
    }
    else{
        odd = odd + arr[i];
    }
    }
    cout<<"Sum of even no is: "<<even<<endl;
    cout<<"Sum of odd no is: "<<odd;

    return 0;
}