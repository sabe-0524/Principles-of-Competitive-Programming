#include <iostream>
using namespace std;

int main(void)
{
  int n, k;
  int a;
  int r[100005] = {0};
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    cin >> a;
    r[i] = r[i - 1] + a;
  }
  int b[100005] = {0};
  long long sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
      b[i] = 0;
    else
      b[i] = b[i - 1];
    while (b[i] < n && r[b[i] + 1] - r[i - 1] <= k)
      b[i]++;
    sum += b[i] - i + 1;
  }
  cout << sum << endl;
}