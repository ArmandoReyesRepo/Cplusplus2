// A program that uses the Vehicle class.   
 
#include <iostream> 
using namespace std; 
 
// Declare the Vehicle class. 
class Vehicle 

{  
public: 
  int passengers; // number of passengers  
  int fuelcap;    // fuel capacity in gallons 
  int mpg;        // fuel consumption in miles per gallon 
}; 
  
int main() {  
  Vehicle minivan; // create a Vehicle object 
  int range;  
 
  // Assign values to fields in minivan. 
  minivan.passengers = 7; 
  minivan.fuelcap = 16; 
  minivan.mpg = 21; 
  
  // Compute the range assuming a full tank of gas. 
  range = minivan.fuelcap * minivan.mpg; 
  
  cout << "Minivan can carry " <<  minivan.passengers << 
          " with a range of " << range << "\n";  
  system ("pause");
  return 0; 
} 