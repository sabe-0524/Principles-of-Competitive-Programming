#include <iostream>
using namespace std;

int main(void)
{
  int n, q;
  int a[100001];
  cin >> n >> q;
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
      cin >> a[0];
    else
    {
      cin >> a[i];
      a[i] += a[i - 1];
    }
  }
  int l, r;
  for (int i = 0; i < q; i++)
  {
    cin >> l >> r;
    if (l == 1)
      cout << a[r - 1] << endl;
    else
      cout << a[r - 1] - a[l - 2] << endl;
  }
  return (0);
}