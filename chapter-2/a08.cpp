#include <iostream>
using namespace std;

int x[1502][1502] = {0};

int main(void)
{
  int h, w;
  int tmp;
  cin >> h >> w;
  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      cin >> tmp;
      x[i][j] = x[i - 1][j] + x[i][j - 1] - x[i - 1][j - 1] + tmp;
    }
  }
  int a, b, c, d, q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> a >> b >> c >> d;
    tmp = x[c][d] - x[a - 1][d] - x[c][b - 1] + x[a - 1][b - 1];
    cout << tmp << endl;
  }
  return (0);
}