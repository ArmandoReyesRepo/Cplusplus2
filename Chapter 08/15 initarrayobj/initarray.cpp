// Initialize an array of objects. 
 
#include <iostream> 
using namespace std; 
 
class MyClass 

{ 
  int x; 
public: 
  MyClass(int i) { x = i; } 
  int get_x() { return x; } 
}; 
 
int main() 
{ 
  MyClass obs[4] = { -1, -2, -3, -4 }; 
  int i; 
 
  for(i=0; i < 4; i++) 
    cout << "obs[" << i << "].get_x(): " << 
            obs[i].get_x() << "\n"; 
  system ("pause");
  return 0; 
}
