#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int h[100005];
int cost[100005];

int main(void)
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> h[i];
  cost[1] = 0;
  for (int i = 2; i <= n; i++)
  {
    if (i == 2)
      cost[i] = abs(h[i] - h[i-1]);
    else
      cost[i] = min((cost[i - 1] + abs(h[i] - h[i-1])), (cost[i - 2] + abs(h[i] - h[i-2])));
  }
  int count = 1;
  vector<int> route;
  route.push_back(n);
  for (int i = n; i >= 2; i--)
  {
    if (cost[i] == cost[i - 1] + abs(h[i] - h[i-1]))
      route.push_back(i - 1);
    else
    {
      route.push_back(i - 2);
      i--;
    }
    count++;
  }
  cout << count << endl;
  reverse(route.begin(), route.end());
  for (int i = 0; i < route.size(); i++)
  {
   cout << route[i];
   if (i < route.size() - 1)
    cout << " ";
  }
  cout << endl;
  return (0);
}