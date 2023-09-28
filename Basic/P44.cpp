//Get the volume of a sphere with radius 6
#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volsp;	
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	volsp=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< volsp << endl;
        cout << endl;
        return 0;
    }
