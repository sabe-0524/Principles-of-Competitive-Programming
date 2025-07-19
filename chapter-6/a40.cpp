#include <iostream>
using namespace std;
using ll = long long;

ll C[102];

int main(void)
{
  int a;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    C[a]++;
  }
  ll total = 0;
  for (int i = 1; i <=100; i++)
  {
    if (C[i] < 3)
      continue;
    total += (C[i] * (C[i] - 1) * (C[i] - 2)) / 6;
  }
  cout << total << endl;
}