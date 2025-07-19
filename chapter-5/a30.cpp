#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll Power(ll a, ll b, ll m)
{
  vector<ll> p;
  ll answer = 1;
  p.push_back((ll)a);
  for(int i = 0; i < 30; i++)
  {
    p.push_back((p.back() * p.back()) % 1000000007);
  }
  int i = 0;
  while(b)
  {
    if (b % 2 == 1)
    {
      answer *= p[i];
      answer %= 1000000007;
    }
    b = b >> 1;
    i++;
  }
  return (answer);
}

int main(void)
{
  int n, r;
  cin >> n >> r;
  ll a = 1, b = 1;
  for (int i = 1; i <= n; i++)
  {
    a *= i;
    a %= 1000000007;
  }
  for (int i = 1; i <= r; i++)
  {
    b *= i;
    b %= 1000000007;
  }
  for (int i = 1; i <= n - r; i++)
  {
    b *= i;
    b %= 1000000007;
  }
  b = Power(b, 1000000005, 1000000007);
  cout << (a * b) % 1000000007 << endl;
}