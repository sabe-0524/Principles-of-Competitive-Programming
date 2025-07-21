#include <iostream>
#include <vector>
using namespace std;

vector<int> G[100005];

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
  for (int i = 1; i <= N; i++)
  {
    cout << i << ": {";
    for (size_t j = 0; j < G[i].size(); j++)
    {
      cout << G[i][j];
      if (j < G[i].size() - 1)
        cout << ", ";
    }
    cout << "}" << endl;
  }
  return (0);
}