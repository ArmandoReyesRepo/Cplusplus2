#include <iostream> 
using namespace std; 
 
void display(int *num); 
 
int main() 
{ 
  int t[10], i; 
 
  for(i=0; i < 10; ++i) t[i]=i; 
 
  display(t); // pass array t to a function 
  system ("pause");
  return 0; 
} 
 
// Print some numbers.  
void display(int *num) 
{ 
  int i; 
 
  for(i=0; i < 10; i++) cout << num[i] << ' '; 
}