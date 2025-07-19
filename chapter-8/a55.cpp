#include <iostream>
#include <set>
using namespace std;

int main(void)
{
  int Q;
  int type, n;
  cin >> Q;
  set<int> s;
  for (int i = 0; i < Q; i++)
  {
    cin >> type >> n;
    if (type == 1)
      s.insert(n);
    else if (type == 2)
      s.erase(n);
    else
    {
      auto answer = s.lower_bound(n);
      if (answer != s.end())
        cout << *answer << endl;
      else
        cout << -1 << endl;
    }
  }
  return (0);
}