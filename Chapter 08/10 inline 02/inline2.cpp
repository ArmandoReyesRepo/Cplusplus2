#include <iostream> 
using namespace std; 
 
class cl 
{ 
  int i; // private by default 
public: 
  // Automatic inline functions. 
  int get_i() { return i; } 
  void put_i(int j) { i = j; } 
} ; 
 
int main() 
{ 
  cl s; 
 
  s.put_i(10); 
  cout << s.get_i(); 
  system ("pause");
  return 0; 
}