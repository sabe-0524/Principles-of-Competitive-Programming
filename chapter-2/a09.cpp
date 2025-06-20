#include <iostream>
using namespace std;

int x[1502][1502] = {0};

int main(void)
{
  int h, w, n;
  cin >> h >> w >> n;
  int a, b, c, d;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c >> d;
    x[a][b]++;
    x[a][d + 1]--;
    x[c + 1][b]--;
    x[c + 1][d + 1]++;
  }
  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      x[i][j] += x[i][j - 1];
    }
  }
  for (int i = 1; i <= w; i++)
  {
    for (int j = 1; j <= h; j++)
    {
      x[j][i] += x[j - 1][i];
    }
  }
  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      cout << x[i][j];
      if (j != w)
        cout << " ";
      else
        cout << endl;
    }
  }
  return (0);
}