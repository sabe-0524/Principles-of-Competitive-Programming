#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void)
{
  int Q;
  int a, b;
  priority_queue<int, vector<int>, greater<int>> q;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> b;
      q.push(b);
    }
    else if (a == 2)
      cout << q.top() << endl;
    else
      q.pop();
  }
  return (0);
}