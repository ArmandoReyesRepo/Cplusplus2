// Return a pointer. 
 
#include <iostream> 
using namespace std; 
 
char *get_substr(char *sub, char *str); 
 
int main() 
{ 
  char *substr; 
 
  substr = get_substr("three", "one two three four"); 
 
  cout << "substring found: " << substr; 
  system ("pause");
  return 0; 
} 
 
// Return pointer to substring or null if not found. 
char *get_substr(char *sub, char *str) 
{ 
  int t; 
  char *p, *p2, *start; 
 
  for(t=0; str[t]; t++) 
  { 
    p = &str[t]; // reset pointers  
    start = p;  
    p2 = sub;     
    while(*p2 && *p2==*p) { // check for substring 
      p++; 
      p2++; 
    }  
 
    /* If at end of p2 (i.e., substring), then 
       a match has been found. */ 
    if(!*p2) 
      return start; // return pointer to beginning of substring 
  } 
  return 0; // no match found 
}