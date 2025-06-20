#include <iostream>
using namespace std;

int z[1505][1505] = {0};

int main(void)
{
  int n;
  int a, b, c, d;
  int ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c >> d;
    a++; b++; c++; d++;
    z[b][a]++;
    z[b][c]--;
    z[d][a]--;
    z[d][c]++;
  }
  for (int i = 0; i < 1502; i++)
  {
    for (int j = 1; j < 1502; j++)
    {
      z[i][j] += z[i][j - 1];
    }
  }
  for (int i = 1; i < 1502; i++)
  {
    for (int j = 0; j < 1502; j++)
    {
      z[i][j] += z[i - 1][j];
      if (z[i][j] > 0)
        ans++;
    }
  }
  cout << ans << endl;
  return (0);
}
