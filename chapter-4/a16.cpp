#include <iostream>
using namespace std;

int d[100005] = {0};
int a[100005] = {0};
int b[100005] = {0};

int main(void)
{
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++)
    cin >> a[i];
  for (int i = 3; i <= n; i++)
    cin >> b[i];
  for (int i = 2; i <= n; i++)
  {
    if (i == 2)
      d[i] = a[i];
    else
      d[i] = min((d[i - 1] + a[i]), (d[i - 2] + b[i]));
  }
  cout << d[n] << endl;
  return (0);
}