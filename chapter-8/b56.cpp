#include <iostream>
#include <string>
using namespace std;
using ll = long long;

ll P[100005];
ll H[100005];
ll RH[100005];
ll mod = 2147483647;

ll make_hash(int l, int r)
{
  ll h = H[r] - (H[l - 1] * P[r - l + 1] % mod);
  if (h < 0)
    h += mod;
  return (h);
}

ll R_make_hash(int l, int r, int N)
{
  ll h = RH[l] - (RH[r + 1] * P[r - l + 1] % mod);
  if (h < 0)
    h += mod;
  return (h);
}

int main(void)
{
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  P[0] = 1;
  for (int i = 1; i <= N; i++)
    P[i] = P[i - 1] * 100LL % mod;
  for (int i = 1; i <= N; i++)
  {
    H[i] = (H[i - 1] * 100LL + S[i - 1] - 'a' + 1) % mod;
    RH[N - i + 1] = (RH[N - i + 2] * 100LL + S[N - i] - 'a' + 1) % mod;
  }
  int l, r;
  for (int i = 0; i < Q; i++)
  {
    cin >> l >> r;
    if (make_hash(l, r) == R_make_hash(l, r, N))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return (0);
}