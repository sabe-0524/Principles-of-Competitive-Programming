#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

bool dp[100005];
ll a[105];

int main(void)
{
  ll n, k;
  cin >> n >> k;
  for (int i = 0; i < k; i++)
    cin >> a[i];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if (i >= a[j] && dp[i - a[j]] == false)
        dp[i] = true;
    }
  }
  if (dp[n] == true)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
  return (0);
}