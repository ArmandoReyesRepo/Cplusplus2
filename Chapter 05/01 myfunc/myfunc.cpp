#include <iostream>
using namespace std;

void myfunc(); // myfunc's protoype

int main()
{
  cout << "In main()\n";

  myfunc(); // call myfunc()

  cout << "Back in main()\n";
  system ("pause");
  return 0;
}
// This if the function's definition.
void myfunc()
{
  cout << "Inside myfunc()\n";
}