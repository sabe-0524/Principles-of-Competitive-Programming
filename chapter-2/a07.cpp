#include <iostream>
using namespace std;

// old code
// int main(void)
// {
//   int d, n;
//   int l, r;
//   int ans[100001] = {0};
//   cin >> d;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> l >> r;
//     for (int j = l; j <= r; j++)
//       ans[j - 1]++;
//   }
//   for (int i = 0; i < d; i++)
//   {
//     cout << ans[i] << endl;
//   }
//   return (0);
// }

int main(void)
{
  int d, n;
  int l, r;
  int tmp = 0;
  int a[100001] = {0};
  cin >> d;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> l >> r;
    a[l]++;
    a[r + 1]--;
  }
  for (int i = 1; i <= d; i++)
  {
    tmp += a[i];
    cout << tmp << endl;
  }
  return (0);
}
