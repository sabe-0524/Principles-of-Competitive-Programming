#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll A[100005];
ll dp[100005];

int main(void)
{
  ll N, L, R;
  cin >> N >> L >> R;
  ll dis;
  for (int i = 1; i <= N; i++)
    cin >> A[i];
  fill(dp, dp+N+1,2147483647);
  dp[1] = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
      dis = A[j] - A[i];
      if (dis > R)
        break;
      else if(dis < L)
        continue;
      dp[j] = min(dp[i] + 1, dp[j]);
    }
  }
  cout << dp[N] << endl;
  return (0);
}