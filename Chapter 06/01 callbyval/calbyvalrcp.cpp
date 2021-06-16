// Changing a call-by-value parameter does not affect the argument. 
 
#include <iostream> 
using namespace std; 
 
double reciprocal(double x); 
 
int main() 
{ 
  double t = 10.0; 
 
  cout << "Reciprocal is of 10.0 is " << reciprocal(t) << "\n"; 
 
  cout << "Value of t is still: " << t << "\n"; 
  system ("pause");
  return 0; 
} 
 
// Return the recirprocal of a value. 
double reciprocal(double x) 
{ 
  x = 1 / x; // create reciprocal 
 
  return x; 
}