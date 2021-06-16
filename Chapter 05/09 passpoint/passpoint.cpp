// Pass a pointer to a function. 
 
#include <iostream> 
using namespace std; 
 
void f(int* j); 
 
int main() 
{ 
  int i; 
 
  f(&i);  
 
  cout << i; 
  system ("pause" );
  return 0; 
} 
    
void f(int* j) 
{ 
  *j = 100; // var pointed to by j is assigned 100 
}