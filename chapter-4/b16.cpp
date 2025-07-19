#include <iostream>
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
  cout << cost[n] << endl;
  return (0);
}