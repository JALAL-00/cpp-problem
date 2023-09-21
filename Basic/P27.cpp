//Convert temperature in Celsius to Kelvin
#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    kel = cel + 273.15;
    cout << " The temperature in Celsius : " << cel << endl;
    cout << " The temperature in Kelvin : " << kel << endl;
	cout << endl;
    return 0;
}
