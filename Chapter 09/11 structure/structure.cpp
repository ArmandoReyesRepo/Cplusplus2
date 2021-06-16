#include <iostream> 
using namespace std; 
 
struct Test 
{ 
  int get_i() { return i; } // these are public 
  void put_i(int j) { i = j; } // by default 
private: 
  int i;    
}; 
 
int main() 
{ 
  Test s; 
 
  s.put_i(10); 
  cout << s.get_i(); 
  system ("pause");
  return 0; 
}