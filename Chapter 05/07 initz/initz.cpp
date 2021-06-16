/* 
   A local variable is initialized each 
   time its block is entered. 
*/ 
 
#include <iostream> 
using namespace std; 
 
void f(); 
 
int main() 
{ 
   
  for(int i=0; i < 3; i++) f(); 
  system ("pause"); 
  return 0; 
} 
 
// num is initialized each time f() is called. 
void f() 
{ 
  int num = 99; 
 
  cout << num << "\n"; 
 
  num++; // this has no lasting effect 
}
