// Returning a reference. 
 
#include <iostream> 
using namespace std; 
 
double &f(); // return a reference. 
 
double val = 100.0; 
 
int main() 
{ 
  double x; 
 
  cout << f() << '\n'; // display val's value 
 
  x = f(); // assign value of val to x 
  cout << x << '\n'; // display x's value 
 
  f() = 99.1; // change val's value 
  cout << f() << '\n'; // display val's new value 
  system ("pause");
  return 0; 
} 
 
// This function returns a reference to a double. 
double &f() 
{ 
  return val; // return reference to val 
}