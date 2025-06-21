#include <iostream>
using namespace std;

int a[100004] = {0};
int a_left[100004] = {0};
int a_right[100004] = {0};

int main(void)
{
  int n, d;
  int l, r;
  int max_l, max_r;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    if (a_left[i - 1] < a[i])
      a_left[i] = a[i];
    else
      a_left[i] = a_left[i - 1];
    if (a_right[n - i + 2] < a[n - i + 1])
      a_right[n - i + 1] = a[n - i + 1];
    else
      a_right[n - i + 1] = a_right[n - i + 2];
  }
  cin >> d;
  for (int i = 0; i < d; i++)
  {
    cin >> l >> r;
    max_l = a_left[l - 1];
    max_r = a_right[r + 1];
    if (max_l > max_r)
      cout << max_l << endl;
    else
      cout << max_r << endl;
  }
  return (0);
}