#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<ll> p;

int main(void)
{
  int a;
  ll b;
  ll answer = 1;
  cin >> a >> b;
  p.push_back((ll)a);
  for(int i = 0; i < 100; i++)
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
  cout << answer << endl;
}