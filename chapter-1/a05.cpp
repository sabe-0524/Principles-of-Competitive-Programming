#include <iostream>
using namespace std;

int main(void)
{
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i + j < k && i + j >= k - n)
        ans++;
    }
  }
  cout << ans << endl;
}