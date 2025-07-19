#include <iostream>
using namespace std;

bool dp[69][10009];

int main(void)
{
  int n, s;
  int a;
  cin >> n >> s;
  dp[0][0] = true;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    for (int j = 0; j <= s; j++)
    {
      if (dp[i][j] == true)
      {
        dp[i + 1][j] = true;
        if (j + a <= s)
          dp[i + 1][j + a] = true;
      }
    }
  }
  if (dp[n][s] == true)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}