#include <iostream>
using namespace std;

int h[200005];

int main(void)
{
  int N, M;
  cin >> N >> M;
  fill(h, h+N, M);
  int a;
  for (int i = 0; i < M; i++)
  {
    cin >> a;
    h[a - 1]--;
  }
  for (int i = 0; i < N; i++)
  {
    cout << h[i] << endl;
  }
  return (0);
}