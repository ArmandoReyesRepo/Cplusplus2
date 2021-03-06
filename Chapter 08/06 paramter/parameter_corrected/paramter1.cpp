// A parameterized constructor.
 
#include <iostream> 
using namespace std; 
 
class MyClass 

{ 
public: 
  int x; 
 
  // Declare constructor and destructor. 
  MyClass(int i);  // constructor 
  ~MyClass(); // destructor 
};   
 
// Implement a parameterized constructor. 
MyClass::MyClass(int i) 

{ 
    x = i; 
}   
 
// Implement MyClass destructor. 
MyClass::~MyClass() 
{ 
  cout << "Destructing object whose x value is " << 
           x  <<" \n"; 
} 
   
int main() 
{   
  MyClass t1(5); 
  MyClass t2(19); 
 
  cout << t1.x << " " << t2.x << "\n"; 
  return 0; 
}
