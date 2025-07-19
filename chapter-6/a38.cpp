#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int a[370];

int main(void)
{
  int n, d;
  int l, r,h;
  cin >> d >> n;
  fill(a, a + 370, 24);
  for (int i = 0; i < n; i++)
  {
    cin >> l >> r >> h;
    for (int j = l; j <= r; j++)
    {
      a[j] = min(a[j], h);
    }
  }
  ll answer = 0;
  for (int i = 1; i <= d; i++)
    answer += a[i];
  cout << answer << endl;
  return (0);
}