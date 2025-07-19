#include <iostream>
using namespace std;

int dp[2005][2005];
int p[2005];
int a[2005];

int main(void)
{
  int n;
  cin >> n;
  int score1, score2;
  for (int i = 1; i <= n; i++)
    cin >> p[i] >> a[i];
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      if (i <= p[i - 1] && p[i - 1] <= j)
        score1 = a[i - 1];
      else
        score1 = 0;
      if (i <= p[j + 1] && p[j + 1] <= j)
        score2 = a[j + 1];
      else
        score2 = 0;
      dp[i][j] = max(dp[i - 1][j] + score1, dp[i][j + 1] + score2);
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans = max(ans, dp[i][i]);
  }
  cout << ans << endl;
}