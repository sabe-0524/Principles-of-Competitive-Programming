#include <iostream>
using namespace std;

bool p[1000005];

int main(void)
{
  int N;
  cin >> N;
  for (int i = 2; i * i <= N; i++)
  {
    if (p[i] == true)
      continue;
    for (int j = i * 2; j <= N; j += i)
      p[j] = true;
  }
  for (int i = 2; i <= N; i++)
  {
    if (p[i] == false)
      cout << i << endl;
  }
  return (0);
}