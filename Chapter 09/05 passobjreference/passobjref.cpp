// Constructors, destructors, and passing objects. 
 
#include <iostream> 
using namespace std; 
 
class MyClass 
{ 
  int val; 
public: 
  MyClass(int i) 
  { 
    val = i; 
    cout << "Inside constructor\n"; 
  } 
 
  ~MyClass() { cout << "Destructing\n"; } 
  int getval() { return val; } 
  void setval(int i) { val = i; } 
}; 
 
void display(MyClass &ob) 
{ 
  cout << ob.getval() << '\n'; 
} 
 
void change(MyClass &ob) 
{ 
  ob.setval(100); 
} 
 
int main() 
{ 
  MyClass a(10); 
 
  cout << "Before calling display().\n"; 
  display(a); 
  cout << "After display() returns.\n"; 
 
  change(a); 
  cout << "After calling change().\n"; 
  display(a); 
  system ("pause");
  return 0; 
}