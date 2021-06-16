// Using return. 
 
#include <iostream> 
using namespace std; 
 
void f(); 
 
int main() 
{ 
  cout << "Before call\n"; 
 
  f(); 
 
  cout << "After call\n"; 
  system ("pause");
  return 0; 
} 
 
// A void function that uses return. 
void f() 
{ 
  cout << "Inside f()\n"; 
 
  return; // return to caller 
 
  cout <<"This won't display.\n"; 
}