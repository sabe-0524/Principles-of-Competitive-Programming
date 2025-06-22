#include <iostream>
#include <vector>
using namespace std;

long long n, k;
long long a[100005] = {0};

long long check(int ans)
{
  long long sum = 0;
  for (long long i = 1; i <= n; i++)
  {
    sum += ans / a[i];
  }
  return (sum);
}

int main(void)
{
  long long int ans;
  cin >> n >> k;
  long long int left = 1;
  long long int right = 1000000000;
  long long sum;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  while (left < right)
  {
    ans = (left + right) / 2;
    sum = check(ans);
    if (sum < k)
      left = ans + 1;
    else
      right = ans;
  }
  cout << left << endl;
  return (0);
}