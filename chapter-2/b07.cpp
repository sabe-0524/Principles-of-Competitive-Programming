#include <iostream>
using namespace std;

int main(void)
{
  int t, n;
  cin >> t;
  cin >> n;
  int a[500001] = {0};
  int l, r;
  int tmp = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> l >> r;
    a[l]++;
    a[r]--;
  }
  for (int j = 0; j < t; j++)
  {
    tmp += a[j];
    cout << tmp << endl;
  }
  return (0);
}