// Create various version of the neg() function. 
 
#include <iostream>  
using namespace std;  
 
int neg(int n);       // neg() for int. 
double neg(double n); // neg() for double. 
long neg(long n);     // neg() for long. 
 
 
int main()  
{  
 
  cout << "neg(-10): " << neg(-10) << "\n"; 
  cout << "neg(9L): " << neg(9L) << "\n"; 
  cout << "neg(11.23): " << neg(11.23) << "\n"; 
  system ("pause");
  return 0;  
} 
 
// neg()for int. 
int neg(int n) 
{ 
  return -n; 
} 
 
// neg()for double. 
double neg(double n) 
{ 
  return -n; 
} 
 
// neg()for long. 
long neg(long n) 
{ 
  return -n; 
}