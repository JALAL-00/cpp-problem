//Calculate the volume of a cylinder
#include <iostream>
using namespace std;

    int main()
    {
    	int rad1,hgt;
    	float volcy;	
        cout<<" Input the radius of the cylinder : ";
    	cin>>rad1;
		cout<<" Input the height of the cylinder : ";
    	cin>>hgt;
    	volcy=(3.14*rad1*rad1*hgt);
        cout<<" The volume of a cylinder is : "<< volcy << endl;
        cout << endl;
        return 0;
    }
