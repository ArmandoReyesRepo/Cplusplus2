// Use a global variable. 
 
#include <iostream> 
using namespace std; 
 
void func1(); 
void func2(); 
 
int count; // This is a global variable.  
 
int main() 
{ 
  int i; // This is a local variable  
 
  for(i=0; i<10; i++) 
  
  { 
    count = i * 2; 
    func1(); 
  } 
  system("pause");
  return 0; 
} 
 
void func1() 
{ 
  cout << "count: " << count; // access global count 
  cout << '\n'; // output a newline 
  func2(); 
} 
 
void func2() 
{ 
  int count; // this is a local variable 
 
  for(count=0; count<3; count++) cout << '.'; 
}
