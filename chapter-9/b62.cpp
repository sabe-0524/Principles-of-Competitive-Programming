#include <iostream>
#include <vector>
using namespace std;

vector<int> G[100005];
bool visited[100005];
vector<int> route;
int N, M;

void dfs(int n)
{
  route.push_back(n);
  visited[n] = true;
  if (n == N)
  {
    for (size_t j = 0; j < route.size(); j++)
    {
      cout << route[j];
      if (j < route.size() - 1)
        cout << " ";
      else
        cout << endl;
    }
    return;
  }
  if (G[n].size() == 0)
  {
    route.pop_back();
    return;
  }
  for (size_t i = 0; i < G[n].size(); i++)
  {
    if (visited[G[n][i]] == true)
      continue;
    dfs(G[n][i]);
  }
  route.pop_back();
}

int main(void)
{
  cin >> N >> M;
  int A, B;
  for (int i = 0; i < M; i++)
  {
    cin >> A >> B;
    G[A].push_back(B);
    G[B].push_back(A);
  }
  dfs(1);
  return (0);
}