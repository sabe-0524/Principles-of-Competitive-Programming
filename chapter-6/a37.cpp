#include <iostream>
using namespace std;
using ll = long long;

int main(void)
{
  int n, m, b;
  int a, c;
  ll answer = 0;
  cin >> n >> m >> b;
  answer += (n * m) * b;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    answer += a * m;
  }
  for (int i = 0; i < m; i++)
  {
    cin >> c;
    answer += c * n;
  }
  cout << answer << endl;
}