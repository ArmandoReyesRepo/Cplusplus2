// Using a reference parameter. 
 
#include <iostream> 
using namespace std; 
 
void f(int &i); // here, i is a reference parameter 
 
int main() 
{ 
  int val = 1; 
 
  cout << "Old value for val: " << val << '\n'; 
 
  f(val); // pass address of val to f() 
 
  cout << "New value for val: " << val << '\n'; 
  system ("pause");
  return 0; 
} 
 
void f(int &i) 
{ 
  i = 10; // this modifies calling argument 
}