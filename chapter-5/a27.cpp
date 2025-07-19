#include <iostream>
using namespace std;

int main(void)
{
  int A, B;
  int r;
  cin >> A >> B;
  while (A && B)
  {
    if (A > B)
      A = A % B;
    else
      B = B % A;
  }
  if (A)
    cout << A << endl;
  else
    cout << B << endl;
  return (0);
}