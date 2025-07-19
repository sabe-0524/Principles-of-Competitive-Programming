#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

long long dp[102][100005];

int main(void)
{
  int N, W;
  int w, v;
  cin >> N >> W;
  for (int i = 0; i < N; i++)
  {
    cin >> w >> v;
    for (int j = 0; j < W; j++)
    {
      if (dp[i][j] > 0 || j == 0)
      {
        if (j + w <= W)
          dp[i + 1][j + w] = dp[i][j] + v;
        if (dp[i][j] > dp[i + 1][j])
          dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << *max_element(begin(dp[N]), end(dp[N])) << endl;
  return (0);
}