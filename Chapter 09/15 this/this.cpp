// Use the "this" pointer. 
 
#include <iostream> 
using namespace std; 
 
class Test 
{ 
  int i; 
public: 
  void load_i(int val) 
  { 
    this->i = val; 
  }  
  int get_i() 
  { 
    return this->i; 
  }  
} ; 
 
int main() 
{ 
  Test o; 
 
  o.load_i(100); 
  cout << o.get_i(); 
  system ("pause");
   
  
 
  return 0; 
}
