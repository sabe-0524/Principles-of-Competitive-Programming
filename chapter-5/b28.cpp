#include <iostream>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int a, b, c;
  a = b = c = 1;
  int tmp;
  for (int i = 3; i <= N; i++)
  {
    tmp = a;
    a = (b + c) % 1000000007;
    c = b;
    b = a;
  }
  cout << a << endl;
  return (0);
}