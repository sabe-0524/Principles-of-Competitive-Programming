#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[2005][2005];

int main(void)
{
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();
  for (size_t i = 1; i <= n; i++)
  {
    for (size_t j = 1; j <= m; j++)
    {
      if (s[i - 1] == t[j - 1])
        dp[i][j] = max(max(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1] + 1);
      else
        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
    }
  }
  cout << dp[n][m] << endl;
}