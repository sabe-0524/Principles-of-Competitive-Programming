#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[100005] = {0};
int a[100005] = {0};
int b[100005] = {0};

int main(void)
{
  vector<int> route;
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
  route.push_back(n);
  int count = 1;
  for (int i = n; i >= 2; i--)
  {
    if (d[i] == d[i - 1] + a[i])
      route.push_back(i - 1);
    else
    {
      route.push_back(i - 2);
      i--;
    }
    count++;
  }
  reverse(route.begin(), route.end());
  cout << count << endl;
  for (int i = 0; i < route.size(); i++)
  {
   cout << route[i];
   if (i < route.size() - 1)
    cout << " ";
  }
  cout << endl;
  return (0);
}