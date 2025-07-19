#include <iostream>
#include <string>
using namespace std;
using ll = long long;

ll H[200005];
ll P[200005];
ll mod = 2147483647;

ll make_hash(int l, int r)
{
  ll h = H[r] - (H[l - 1] * P[r - l + 1] % mod);
  if (h < 0)
    h += mod;
  return (h);
}

int main(void)
{
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  P[0] = 1;
  for (int i = 1; i <= N; i++)
    P[i] = P[i - 1] * 100LL % mod;
  for (int i = 1; i <= N; i++)
    H[i] = (H[i - 1] * 100LL + S[i - 1] - 'a' + 1) % mod;
  int a, b, c, d;
  for (int i = 0; i < Q; i++)
  {
    cin >> a >> b >> c >> d;
    if (make_hash(a, b) == make_hash(c, d))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return (0);
}