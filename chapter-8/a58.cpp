#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int L[4000000];
int siz = 1;

void make_siz(int N)
{
  while (siz < N)
    siz <<= 1;
}

void insert(int pos, int n)
{
  pos = pos + siz - 1;
  L[pos] = n;
  while (pos >= 2)
  {
    pos /= 2;
    L[pos] = max(L[pos * 2], L[pos * 2 + 1]);
  }
}

int answer(int l, int r, int a, int b, int u)
{
  if (r <= a || b <= l)
    return (-100);
  else if (l <= a && b <= r)
    return (L[u]);
  int m = (a + b) / 2;
  int Left = answer(l, r, a, m, 2*u);
  int Right = answer(l, r, m, b, 2*u + 1);
  return max(Left, Right);
}

int main(void)
{
  int N, Q;
  cin >> N >> Q;
  int type, x, y;
  make_siz(N);
  for (int i = 0; i < Q; i++)
  {
    cin >> type >> x >> y;
    if (type == 1)
      insert(x, y);
    else
      cout << answer(x, y, 1, siz + 1, 1) << endl;;
  }
  return (0);
}