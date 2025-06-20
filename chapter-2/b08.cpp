#include <iostream>
using namespace std;

int z[1502][1502] = {0};

int main(void)
{
  int n, q;
  int x, y;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    z[y][x]++;
  }
  for (int i = 1; i < 1501; i++)
  {
    for (int j = 1; j < 1501; j++)
    {
      z[i][j] = z[i - 1][j] + z[i][j - 1] - z[i - 1][j - 1] + z[i][j];
    }
  }
  cin >> q;
  int a, b, c, d;
  for (int i = 0; i < q; i++)
  {
    cin >> a >> b >> c >> d;
    cout << z[d][c] + z[b - 1][a - 1] - z[d][a - 1] - z[b - 1][c] << endl;
  }
  return (0);
}