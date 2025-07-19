#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[2005][2005];

int main(void)
{
  for (int i = 0; i < 2001; i++)
    dp[i][0] = i;
  for (int i = 0; i < 2001; i++)
    dp[0][i] = i;
  dp[0][0] = 0;
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();
  for (size_t i = 1; i <= n; i++)
  {
    for (size_t j = 1; j <= m; j++)
    {
      if (s[i - 1] == t[j - 1])
        dp[i][j] = min(min(dp[i][j - 1]+1, dp[i - 1][j]+1), dp[i - 1][j - 1]);
      else
        dp[i][j] = min(min(dp[i][j - 1]+1, dp[i - 1][j]+1), dp[i - 1][j - 1]+1);
    }
  }
  cout << dp[n][m] << endl;
}