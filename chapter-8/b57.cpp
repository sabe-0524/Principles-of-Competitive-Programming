#include <iostream>
using namespace std;
using ll = long long;

int D[35][300005];


int main(void)
{
  int N, K;
  cin >> N >> K;
  int tmp, digit;
  for(int i = 1; i <= N; i++)
  {
    tmp = i;
    digit = 0;
    while(tmp)
    {
      digit += tmp % 10;
      tmp /= 10;
    }
    D[0][i] = i - digit;
  }
  for (int i = 1; i <= 30; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      tmp = D[i - 1][j];
      D[i][j] = D[i - 1][tmp];
    }
  }
  for (int i = 1; i <= N; i++)
  {
    int k = K;
    int ans = i;
    for (int j = 0; k; j++)
    {
      if (k % 2 == 1)
        ans = D[j][ans];
      k /= 2;
    }
    cout << ans << endl;
  }
  return (0);
}