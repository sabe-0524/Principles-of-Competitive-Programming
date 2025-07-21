#include <iostream>
#include <vector>
using namespace std;

vector<int> G[100005];
bool already[100005];

void dfs(int n)
{
  already[n] = true;
  if (G[n].size() == 0)
    return;
  for(size_t i = 0; i < G[n].size(); i++)
  {
    if (already[G[n][i]] == true)
      continue;
    dfs(G[n][i]);
  }
}

int main(void)
{
  int N, M;
  cin >> N >> M;
  int A, B;
  for (int i = 0; i < M; i++)
  {
    cin >> A >> B;
    G[A].push_back(B);
    G[B].push_back(A);
  }
  dfs(1);
  for (int i = 1; i <= N; i++)
  {
    if (already[i] == false)
    {
      cout << "The graph is not connected." << endl;
      return (0);
    }
  }
  cout << "The graph is connected." << endl;
  return (0);
}