// Use reference parameters to create the swap() function. 
 
#include <iostream> 
using namespace std; 
 
// Declare swap() using reference parameters. 
void swap(int &x, int &y); 
 
int main() 
{ 
  int i, j; 
 
  i = 10; 
  j = 20; 
 
  cout << "Initial values of i and j: "; 
  cout << i << ' ' << j << '\n'; 
 
  swap(j, i); 
 
  cout << "Swapped values of i and j: "; 
  cout << i << ' ' << j << '\n'; 
  system ("pause");
  return 0; 
} 
 
/* Here, swap() is defined as using call-by-reference, 
   not call-by-value. Thus, it can exchange the two 
   arguments it is called with. 
*/ 
void swap(int &x, int &y) 
{ 
  int temp; 
 
  // use references to exchange the values of the arguments 
  temp = x;  
  x = y;     
  y = temp;  
}