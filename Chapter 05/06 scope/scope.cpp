#include <iostream> 
using namespace std; 
 
void f1(); 
 
int main() 
{ 
  int val = 10; 
 
  cout << "val in main(): " << val << '\n'; 
  f1(); 
  cout << "val in main(): " << val << '\n'; 
  system ("pause");
  return 0; 
} 
 
void f1() 
{ 
  int val = 88; 
 
  cout << "val in f1(): " << val << "\n"; 
}