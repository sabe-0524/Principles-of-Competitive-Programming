#include <iostream>
using namespace std;

int dp[100005];
int a[100005];
int b[100005];

int main(void)
{
  int N;
  cin >> N;
  fill(dp, dp + 100005, 0);
  fill(a, a + 100005, -1);
  fill(b, b + 100005, -1);
  for (int i = 2; i <= N; i++)
    cin >> a[i];
  for (int i = 3; i <= N; i++)
    cin >> b[i];
  for (int i = 1; i < N; i++)
  {
    if (a[i + 1] != -1)
    {
      dp[i + 1] = min(dp[i + 1], dp[i] + a[i + 1]);
      if (dp[i + 1] == 0)
        dp[i + 1] = dp[i] + a[i + 1];
    }
    if (b[i + 2] != -1)
    {
      dp[i + 2] = min(dp[i + 2], dp[i] + b[i + 2]);
      if (dp[i + 2] == 0)
        dp[i + 2] = dp[i] + b[i + 2];
    }
  }
  cout << dp[N] << endl;
}