// Returning a value. 
 
#include <iostream> 
using namespace std; 
 
int box(int length, int width, int height); // return the volume 
 
int main() 
{ 
  int answer; 
 
  answer = box(10, 11, 3); // assign return value 
  cout << "The volume is " <<  answer; 
  system ("pause");
  return 0; 
} 
 
// This function returns a value.  
int box(int length, int width, int height) 
{ 
  return length * width * height ; 
}