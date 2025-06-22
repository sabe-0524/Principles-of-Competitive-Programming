#include <iostream>
using namespace std;

int main(void)
{
  int n, k;
  int a[100005], r[100005] = {0};
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  r[0] = 2;
  for (int i = 1; i <= n; i++)
  {
    r[i] = r[i - 1] - 1;
    while (a[r[i]] - a[i] <= k && r[i] <= n)
    {
      r[i]++;
    }
  }
  long long sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += r[i] - i - 1;
  }
  cout << sum << endl;
  return (0);
}