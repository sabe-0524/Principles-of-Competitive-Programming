#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int N;
  char C;
  string s;
  cin >> N >> C;
  cin >> s;
  int total = 0;
  for (int i = 0; i < N; i++)
  {
    if (s[i] == 'B')
      total += 1;
    else if (s[i] == 'R')
      total += 2;
  }
  if (total % 3 == 0 && C == 'W')
    cout << "Yes" << endl;
  else if (total % 3 == 1 && C == 'B')
    cout << "Yes" << endl;
  else if (total % 3 == 2 && C == 'R')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (0);
}