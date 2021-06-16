// Demonstrate default arguments. 
 
#include <iostream>  
using namespace std;  
 
void myfunc(int x = 0, int y = 100); 
 
int main()  
{  
  myfunc(1, 2); 
 
  myfunc(10); 
 
  myfunc(); 
  system ("pause");
  return 0; 
} 
 
void myfunc(int x, int y) 
{ 
  cout << "x: " << x << ", y: " << y << "\n"; 
}
