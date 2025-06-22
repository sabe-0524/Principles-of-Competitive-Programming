#include <iostream>
using namespace std;

int main(void)
{
  int n;
  float left = 1;
  float right = 100000;
  cin >> n;
  float mid;
  while (left + 0.001 < right)
  {
    mid = (left + right) / 2;
    if (mid * mid * mid + mid < n)
      left = mid;
    else
      right = mid;
  }
  cout << left << endl;
  return (0);
}