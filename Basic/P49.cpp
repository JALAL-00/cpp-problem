//Print the code of a given character

#include <iostream>
using namespace std;
int main() 
{
    char sing_ch; 
 	cout << " Input a character: ";
	    cin >> sing_ch;	
	
  cout <<" The ASCII value of "<<sing_ch<<" is: " <<(int)sing_ch << endl; 
  cout <<" The character for the ASCII value "<<(int)sing_ch <<" is: "<<(char)((int)sing_ch) << endl<< endl; 
  return 0;
}
