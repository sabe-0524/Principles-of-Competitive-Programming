#include <iostream>
using namespace std;

int a[100003];

int main(void)
{
  int n, x;
  int l, r;
  int tmp;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  l = 0;
  r = n - 1;
  while (true)
  {
    tmp = a[(l + r) / 2];
    if (tmp < x)
      l = (l + r) / 2 + 1;
    else if (tmp > x)
      r = (l + r) / 2;
    else
    {
      cout << (l + r) / 2 + 1 << endl;
      break;
    }
  }
  return (0);
}

