#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int n;
  string s;

  cin >> n;
  for (int i = 0; i < 10; i++)
  {
    if ((n >> (9 - i)) & 1)
      s += "1";
    else
      s += "0";
  }
  cout << s << endl;
  return (0);
}