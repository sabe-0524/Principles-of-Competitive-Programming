#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main(void)
{
  int Q;
  set<int> S;
  cin >> Q;
  int t, n;
  ll ans;
  for (int i = 0; i < Q; i++)
  {
    cin >> t >> n;
    if (t == 1)
      S.insert(n);
    else
    {
      if (S.empty() == 1)
      {
        cout << -1 << endl;
        continue;
      }
      auto plus = S.lower_bound(n);
      if (plus == S.end())
        cout << n - *(--plus) << endl;
      else if (plus == S.begin())
        cout << *plus - n << endl;
      else
      {
        ans = *plus - n;
        if (ans > n - *(--plus))
          ans = n - *plus;
        cout << ans << endl;
      }
    }
  }
  return (0);
}