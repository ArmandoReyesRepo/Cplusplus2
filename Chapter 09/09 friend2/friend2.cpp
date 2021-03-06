// Friend functions can be shared by two or more classes. 
 
#include <iostream> 
using namespace std; 
 
class Cylinder; // a forward declaration 
 
enum colors { red, green, yellow }; 
 
class Cube 
{ 
 colors color; 
public: 
  Cube(colors c) { color = c; } 
  friend bool sameColor(Cube x, Cylinder y); 
  // ... 
}; 
 
class Cylinder 
{ 
 colors color; 
public: 
  Cylinder(colors c) { color= c; } 
  friend bool sameColor(Cube x, Cylinder y); 
  // ... 
}; 
 
bool sameColor(Cube x, Cylinder y) 
{ 
  if(x.color == y.color) return true; 
  else return false; 
} 
 
int main() 
{ 
  Cube cube1(red); 
  Cube cube2(green); 
  Cylinder cyl(green); 
 
 
  if(sameColor(cube1, cyl)) 
    cout << "cube1 and cyl are the same color.\n"; 
  else 
    cout << "cube1 and cyl are different colors.\n"; 
 
  if(sameColor(cube2, cyl)) 
    cout << "cube2 and cyl are the same color.\n"; 
  else 
    cout << "cube2 and cyl are different colors.\n"; 
  system ("pause");
  return 0; 
} 