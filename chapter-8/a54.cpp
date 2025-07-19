#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
  map<string, int> m;
  int Q;
  cin >> Q;
  int type, score;
  string name;
  for (int i = 0; i < Q; i++)
  {
    cin >> type >> name;
    if (type == 1)
    {
      cin >> score;
      m[name] = score;
    }
    else
      cout << m[name] << endl;
  }
  return (0);
}