// Compute a running average of numbers entered by the user.

#include <iostream>
using namespace std;

double running_avg(int i);

int main()
{
  int num;

  do
  {
    cout << "Enter numbers (-1 to quit): ";
    cin >> num;
    if(num != -1)
      cout << "Running average is: " << running_avg(num);
    cout << '\n';
  }
  while(num > -1);
  system ("pause" );
  return 0;
}

double running_avg(int i)
{
  double sum = 0, count = 0;

  sum = sum + i;

  count++;

  return sum / count;
}
