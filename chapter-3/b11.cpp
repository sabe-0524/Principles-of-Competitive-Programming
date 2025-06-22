#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];

int main(void)
{
  int n, q, x, tmp;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> q;
  sort(a, a + n);
  for (int i = 0; i < q; i++)
  {
    cin >> x;
    tmp = lower_bound(a, a + n, x) - a;
    cout << tmp << endl;
  }
  return (0);
}