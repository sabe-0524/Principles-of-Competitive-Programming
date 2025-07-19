#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll Power(ll a, ll b, ll m)
{
  vector<ll> p;
  ll answer = 1;
  p.push_back((ll)a);
  for(int i = 0; i < 60; i++)
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
  ll H, W;
  ll a = 1, b = 1;
  cin >> H >> W;
  H--;
  W--;
  ll M = 1000000007;
  ll P = H + W;
  for (int i = P; i > P - H; i--)
  {
    a *= i;
    a %= M;
  }
  for (int i = 1; i <= H; i++)
  {
    b *= i;
    b %= M;
  }
  b = Power(b, M - 2, M);
  cout << (a * b) % M << endl;
  return (0);
}