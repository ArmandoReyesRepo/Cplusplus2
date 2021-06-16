// Demonstrate an anonymous union. 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main() 
{ 
  // define anonymous union 
  union 
  { 
    long l; 
    double d; 
    char s[4]; 
  } ; 
 
  // now, reference union elements directly 
  l = 100000; 
  cout << l << " "; 
  d = 123.2342; 
  cout << d << " "; 
  strcpy(s, "hi"); 
  cout << s;
  system ("pause");
   
  
 
  return 0; 
}