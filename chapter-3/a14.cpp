#include <iostream>
#include <algorithm>
using namespace std;

int p[1000005], q[1000005];;

int main(void)
{
  int n, k;
  cin >> n >> k;
  int a[1005], b[1005], c[1005], d[1005];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 0; i < n; i++)
    cin >> c[i];
  for (int i = 0; i < n; i++)
    cin >> d[i];
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      p[i * n + j] = a[i] + b[j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      q[i * n + j] = c[i] + d[j];
    }
  }
  sort(q, q + n * n);
  int tmp;
  for (int i = 0; i < n * n; i++)
  {
    tmp = lower_bound(q, q + n * n, k - p[i]) - q;
    if (tmp != n*n && q[tmp] == k - p[i])
    {
      cout << "Yes" << endl;
      return (0);
    }
  }
  cout << "No" << endl;
  return (0);
}