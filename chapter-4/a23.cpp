#include <iostream>
#include <limits>
using namespace std;

int dp[105][1030] = {};

int main(void)
{
  constexpr int INF = std::numeric_limits<int>::max();
  for(int i = 0; i < 105; ++i){
    for(int j = 0; j < 1030; ++j){
        dp[i][j] = INF;
    }
  }
  dp[0][0] = 0;
  int N, M;
  cin >> N >> M;
  int tmp;
  int a;

  for (int i = 0; i < M; i++)
  {
    a = 0;
    for (int j = 0; j < N; j++)
    {
      cin >> tmp;
      a = (a << 1) + tmp;
    }
    for (int j = 0; j < (1 << N); j++)
    {
      if (dp[i][j] != INF)
      {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        dp[i + 1][j|a] = min(dp[i + 1][j|a], dp[i][j] + 1);
      }
    }
  }
  int goal = (1 << N) - 1;
  if (dp[M][goal] == INF)
    cout << -1 << endl;
  else
    cout << dp[M][goal]  << endl;
  return (0);
}