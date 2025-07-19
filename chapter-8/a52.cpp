#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
  int Q;
  queue<string> q;
  string s;
  int a;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> s;
      q.push(s);
    }
    else if (a == 2)
      cout << q.front() << endl;
    else
      q.pop();
  }
  return (0);
}