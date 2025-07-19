#include <iostream>
using namespace std;
using ll = long long;

int D[35][100005];
int A[100005];

int main(void)
{
  int N, Q;
  int tmp;
  cin >> N >> Q;
  for (int i = 1; i <= N; i++)
    cin >> A[i];
  for (int i = 1; i <= N; i++)
    D[0][i] = A[i];
  for (int i = 1; i <= 30; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      tmp = D[i - 1][j];
      D[i][j] = D[i - 1][tmp];
    }
  }
  ll x, y;
  int answer;
  for (int i = 0; i < Q; i++)
  {
    cin >> x >> y;
    answer = x;
    for (int j = 0; y; j++)
    {
      if (y % 2 == 1)
        answer = D[j][answer];
      y /= 2;
    }
    cout << answer << endl;
  }
  return (0);
}