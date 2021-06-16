// Overload the ++ unary operator. 
 
#include <iostream> 
using namespace std; 
 
class ThreeD
 { 
  int x, y, z; // 3-D coordinates 
public: 
  ThreeD() { x = y = z = 0; } 
  ThreeD(int i, int j, int k) {x = i; y = j; z = k; } 
 
  ThreeD operator++(); // prefix version of ++ 
 
  void show() ; 
} ; 
 
// Overload the prefix version of ++. 
ThreeD ThreeD::operator++() 
{ 
  x++; // increment x, y, and z  
  y++;  
  z++; 
  return *this; 
} 
 
// Show X, Y, Z coordinates. 
void ThreeD::show() 
{ 
  cout << x << ", "; 
  cout << y << ", "; 
  cout << z << "\n"; 
} 
 
int main() 
{ 
  ThreeD a(1, 2, 3); 
 
  cout << "Original value of a: "; 
  a.show(); 
 
  ++a;  // increment a 
  cout << "Value after ++a: "; 
  a.show(); 
  system ("pause");
  
 
  return 0; 
}