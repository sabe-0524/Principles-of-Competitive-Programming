#include <vector>
#include <queue>
#include <iostream>
using namespace std;
using ll = long long;

vector<ll> G[2005];

int main(void)
{
  ll N, D;
  ll x, y;
  cin >> N >> D;
  for (int i = 0; i < N; i++)
  {
    cin >> x >> y;
    G[x].push_back(y);
  }
  priority_queue<ll> q;
  ll total = 0;
  for (int i = 1; i <= D; i++)
  {
    for (size_t j = 0; j < G[i].size(); j++)
      q.push(G[i][j]);
    if (!q.empty())
    {
      total += q.top();
      q.pop();
    }
  }
  cout << total << endl;
}