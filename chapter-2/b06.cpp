#include <iostream>
using namespace std;

int main(void)
{
  int n, q;
  int tmp;
  int a[100001];
  int b[100001];
  int l, r;
  a[0] = b[0] = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    if (tmp == 1)
    {
      a[i + 1] = a[i] + 1;
      b[i + 1] = b[i];
    }
    else
    {
      a[i + 1] = a[i];
      b[i + 1] = b[i] + 1;
    }
  }
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> l >> r;
    tmp = (a[r] - a[l - 1]) - (b[r] - b[l - 1]);
    if (tmp > 0)
      cout << "win" << endl;
    else if (tmp == 0)
      cout << "draw" << endl;
    else
      cout << "lose" << endl;
  }
  return (0);
}