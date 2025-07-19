#include <iostream>
using namespace std;
#include <algorithm>

int T[505];
int table[505][505];

int main(void)
{
  int N, Q;
  int a;
  cin >> N;
  for (int i = 0; i <= N; i++)
    T[i] = i;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      cin >> a;
      table[i][j] = a;
    }
  }
  cin >> Q;
  int type, x, y;
  for (int i = 0; i < Q; i++)
  {
    cin >> type >> x >> y;
    if (type == 1)
    {
      swap(T[x], T[y]);
    }
    else
    {
      cout << table[T[x]][y] << endl;
    }
  }
  return (0);
}