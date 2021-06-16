// Demonstrate prefix and postfix ++. 
 
#include <iostream> 
using namespace std; 
 
class ThreeD 
{ 
  int x, y, z; // 3-D coordinates 
public: 
  ThreeD() { x = y = z = 0; } 
  ThreeD(int i, int j, int k) {x = i; y = j; z = k; } 
 
  ThreeD operator++(); // prefix version of ++ 
  ThreeD operator++(int notused); // postfix version of ++ 
 
  void show() ; 
}; 
 
// Overload the prefix version of ++. 
ThreeD ThreeD::operator++() 
{ 
  x++;  // increment x, y, and z 
  y++; 
  z++; 
  return *this; // return altered value 
} 
 
// Overload the postfix version of ++. 
ThreeD ThreeD::operator++(int notused) 
{ 
  ThreeD temp = *this; // save original value 
 
  x++; // increment x, y, and z 
  y++; 
  z++; 
  return temp; // return original value 
} 
 
// Show X, Y, Z coordinates. 
void ThreeD::show( ) 
{ 
  cout << x << ", "; 
  cout << y << ", "; 
  cout << z << "\n"; 
} 
 
int main() 
{ 
  ThreeD a(1, 2, 3); 
  ThreeD b; 
 
  cout << "Original value of a: "; 
  a.show(); 
 
  cout << "\n"; 
 
  ++a; // prefix increment 
  cout << "Value after ++a: "; 
  a.show(); 
 
  a++; // postfix increment 
  cout << "Value after a++: "; 
  a.show(); 
 
  cout << "\n"; 
 
  b = ++a; // b receives a's value after increment 
  cout << "Value of a after b = ++a: "; 
  a.show(); 
  cout << "Value of b after b = ++a: "; 
  b.show(); 
 
  cout << "\n"; 
 
  b = a++; // a receives c's value prior to increment 
  cout << "Value of a after b = a++: "; 
  a.show(); 
  cout << "Value of b after b = a++: "; 
  b.show(); 
  system ("pause");
 
  return 0; 
}