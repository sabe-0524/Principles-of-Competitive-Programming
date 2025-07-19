#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int N;
  string s;
  cin >> N;
  cin >> s;
  int countR = 0;
  int countB = 0;
  for (int i = 0; i < N; i++)
  {
    if (s[i] == 'R')
    {
      countR++;
      countB = 0;
    }
    else
    {
      countB++;
      countR = 0;
    }
    if (countR == 3 || countB == 3)
    {
      cout << "Yes" << endl;
      return (0);
    }
  }
  cout << "No" << endl;
  return (0);
}