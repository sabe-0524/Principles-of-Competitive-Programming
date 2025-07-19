#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
  stack<int> S;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(')
      S.push(i + 1);
    else
    {
      cout << S.top() << " " << i + 1 << endl;
      S.pop();
    }
  }
  return (0);
}