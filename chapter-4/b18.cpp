#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dp[69][10009];

int main(void)
{
  int n, s;
  int a[10009];
  cin >> n >> s;
  dp[0][0] = true;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    for (int j = 0; j <= s; j++)
    {
      if (dp[i][j] == true)
      {
        dp[i + 1][j] = true;
        if (j + a[i] <= s)
          dp[i + 1][j + a[i]] = true;
      }
    }
  }
  if (dp[n][s] == false)
  {
    cout << -1 << endl;
    return (0);
  }
  vector<int> route;
  int place = s;
  for (int i = n - 1; i >= 0; i--)
  {
    if (place - a[i] >= 0 && dp[i][place - a[i]] == true)
    {
      place -= a[i];
      route.push_back(i + 1);
    }
  }
  reverse(route.begin(), route.end());
  cout << route.size() << endl;
  for (size_t i = 0; i < route.size(); i++)
  {
    cout << route[i];
    if (i < route.size() - 1)
      cout << " ";
  }
  cout << endl;
  return (0);
}