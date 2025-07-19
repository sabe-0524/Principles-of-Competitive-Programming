#include <iostream>
using namespace std;

int dp[100005];
int a[100005];
int b[100005];

int main(void)
{
  int N;
  cin >> N;

  fill(dp, dp + 100005, -1);
  dp[1] = 0;
  for (int i = 1; i < N; i++)
    cin >> a[i];
  for (int i = 1; i < N; i++)
    cin >> b[i];
  for (int i = 1; i < N; i++)
  {
    if (dp[i] == -1)
      continue;
    dp[a[i]] = max(dp[i] + 100, dp[a[i]]);
    dp[b[i]] = max(dp[i] + 150, dp[b[i]]);
  }
  cout << dp[N] << endl;
}