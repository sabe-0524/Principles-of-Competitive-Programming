#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
  stack<string> S;
  int Q;
  cin >> Q;
  int a;
  string s;
  for (int i = 0; i < Q; i++)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> s;
      S.push(s);
    }
    else if (a == 2)
      cout << S.top() << endl;
    else
      S.pop();
  }
  return (0);
}