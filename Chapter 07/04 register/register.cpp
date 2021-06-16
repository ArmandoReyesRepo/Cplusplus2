// Demonstrate register. 
 
#include <iostream> 
using namespace std; 
 
int summation(int nums[], int n); 
 
int main() 
{ 
  int vals[] = { 1, 2, 3, 4, 5 }; 
  int result; 
 
  result = summation(vals, 5); 
 
  cout << "Summation is " << result << "\n"; 
  system ("pause");
  return 0; 
} 
 
// Return summation of an array of ints. 
int summation(int nums[], int n) 
{ 
  register int i; 
  register int sum = 0; 
 
  for(i = 0; i < n; i++) 
    sum = sum + nums[i]; 
 
  return sum; 
}