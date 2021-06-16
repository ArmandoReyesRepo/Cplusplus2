// Variables can be local to a block. 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int x = 19; // x is known to all code. 
 
  if(x == 19) 
  
  { 
    int y = 20; 
    cout << "x + y is " << x + y << "\n"; 
  } 
 
  y = 100; // Error!  y not known here. 
 
  return 0; 
}
