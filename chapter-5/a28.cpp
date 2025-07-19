#include <iostream>
using namespace std;

char t[100005];
int a[100005];

int main(void)
{
  int N;
  cin >> N;
  int answer = 0;
  for (int i = 0; i < N; i++)
    cin >> t[i] >> a[i];
  for (int i = 0; i < N; i++)
  {
    if (t[i] == '+')
      answer += a[i];
    else if (t[i] == '*')
      answer *= a[i];
    else
      answer -= a[i];
    if (answer < 0)
      answer += 10000;
    answer %= 10000;
    cout << answer << endl;
  }
}