#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

long long dp[102][100005];

int main(void)
{
  for(int i = 0; i < 102; ++i){
      for(int j = 0; j < 100005; ++j){
          dp[i][j] = (long long)1e18;
      }
  }
  int N, W;
  int w, v;
  cin >> N >> W;
  dp[0][0] = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> w >> v;
    for (int j = 0; j <= 100000; j++)
    {
      if (dp[i][j] != (long long)1e18)
      {
        if (j + v <= 100000)
          dp[i + 1][j + v] = dp[i][j] + w;
        if (dp[i][j] < dp[i + 1][j])
          dp[i + 1][j] = dp[i][j];
      }
    }
  }
  long long M = 0;
  for (int i = 0; i <=100000; i++)
  {
    if (dp[N][i] <= W)
      M = i;
  }
  cout << M << endl;
  return (0);
}