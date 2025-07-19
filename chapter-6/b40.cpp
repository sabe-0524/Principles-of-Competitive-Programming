#include <iostream>
using namespace std;
using ll = long long;

ll cnt[100];

int main(void)
{
  int N;
  cin >> N;
  ll tmp;
  for (int i = 0; i < N; i++)
  {
    cin >> tmp;
    cnt[tmp % 100]++;
  }
  ll total = 0;
  for (int i = 0; i < 100; i++)
  {
    if (i == 0)
    {
      if (cnt[0] > 1)
        total += (cnt[0] * (cnt[0] - 1));
    }
    else if (i == 50)
    {
      if (cnt[50] > 1)
        total += (cnt[50] * (cnt[50] - 1));
    }
    else
    {
      total += cnt[i] * cnt[100 - i];
    }
  }
  cout << total / 2 << endl;
  return (0);
}