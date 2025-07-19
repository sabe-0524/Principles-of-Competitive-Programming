#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
  int N, X;
  string s;
  queue<int> q;
  cin >> N >> X;
  cin >> s;
  s.insert(s.begin(), 's');
  s.insert(s.end(), 's');
  q.push(X);
  s[X] = '@';
  while (!q.empty())
  {
    if (s[q.front() - 1] == '.')
    {
      q.push(q.front() - 1);
      s[q.front() - 1] = '@';
    }
    if (s[q.front() + 1] == '.')
    {
      q.push(q.front() + 1);
      s[q.front() + 1] = '@';
    }
    q.pop();
  }
  s.erase(0, 1);
  s.pop_back();
  cout << s << endl;
  return (0);
}