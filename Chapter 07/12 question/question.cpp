/* This program uses the ? operator to prevent 
   a division by zero. */ 
 
#include <iostream> 
using namespace std; 
 
int div_zero(); 
 
int main() 
{ 
  double i, j, result; 
 
  cout << "Enter dividend and divisor: "; 
  cin >> i >> j; 
 
  // This statement prevents a divide by zero error. 
  result = j ? i/j : div_zero(); 
 
  cout << "Result: " << result; 
  system ("pause");
  return 0; 
} 
 
int div_zero() 
{ 
  cout << "Cannot divide by zero.\n"; 
  return 0; 
}