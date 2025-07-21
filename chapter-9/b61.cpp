#include <iostream>
#include <vector>
using namespace std;

int G[100005];

int main(void)
{
  int N, M, A, B;
  cin >> N >> M;
  for (int i = 0; i < M; i++)
  {
    cin >> A >> B;
    G[A]++;
    G[B]++;
  }
  int m = 0;
  for (int i = 0; i < N; i++)
  {
    if (G[m] < G[i])
      m = i;
  }
  cout << m << endl;
  return (0);
}