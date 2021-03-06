// Pass an object to a function. 
 
#include <iostream> 
using namespace std; 
 
class MyClass 
{ 
  int val; 
public: 
  MyClass(int i) { val = i; } 
  int getval() { return val; } 
  void setval(int i) { val = i; } 
}; 
 
void display(MyClass ob) 
{ 
  cout << ob.getval() << '\n'; 
} 
 
void change(MyClass ob) 
{ 
  ob.setval(100); // no effect on argument 
 
  cout << "Value of ob inside change(): "; 
  display(ob); 
} 
 
int main() 
{ 
  MyClass a(10); 
 
  cout << "Value of a before calling change(): "; 
  display(a); 
 
  change(a); 
  cout << "Value of a after calling change(): "; 
  display(a); 
  system ("pause");
  return 0; 
}