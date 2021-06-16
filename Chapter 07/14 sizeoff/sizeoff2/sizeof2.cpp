// Demonstrate sizeof. 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  char ch; 
  int i;

  i = 1;
  ch = 35;  
 
  //cout << sizeof ch << ' '; // size of char 
  //cout << sizeof i << ' ';  // size of int 
  cout <<" sizeof type float  :" << sizeof (float) << "\n"; // size of float 
  cout <<" sizeof type double :" << sizeof (double) << "\n"; // size of double 
  cout << "\n\n";
  cout <<" sizeof var i integer :" << sizeof i <<"\n";
  cout <<" sizeof var ch char   :" << sizeof ch<<"\n\n";
  
  system("pause");
 
  return 0; 
}

