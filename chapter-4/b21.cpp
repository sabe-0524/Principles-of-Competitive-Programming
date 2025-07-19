#include <iostream>
using namespace std;

int dp[1005][1005];

int main(void)
{
  int n;
  string s;
  cin >> n >> s;
  s = " " + s + " ";
  int score1, score2;

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      if (s[i - 1] == s[j + 1])
        score1 = 2;
      else
        score1 = 0;
      dp[i][j] = max(max(dp[i - 1][j], dp[i][j + 1]), dp[i - 1][j + 1] + score1);
    }
  }
  // int l = 1;
  // int r = n;
  // while (r != l)
  // {
  //   if (s[l] == s[r])
  //     score2 = 2;
  //   dp[l + 1][r - 1] = max(dp[r + 1][l - 1], dp[l][r] + score2);
  //   dp[l + 1][r]
  // }
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans = max(ans, dp[i][i]);
    // if (s[i - 1] == s[i + 1])
    //   ans++;
  }
  cout << ans << endl;
}