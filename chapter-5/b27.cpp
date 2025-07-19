#include <iostream>
using namespace std;
using ll = long long;

int find_GCD(int a, int b)
{
  while (a && b)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  if (a)
    return (a);
  else
    return (b);
}

int main(void)
{
  ll A, B;
  cin >> A >> B;
  int GCD = find_GCD(A, B);
  cout << A * B / GCD << endl;
  return (0);
}