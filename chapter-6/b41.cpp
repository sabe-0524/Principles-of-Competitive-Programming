#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(void)
{
  vector<array<int, 2>> v;
  int X, Y;
  cin >> X >> Y;
  v.push_back({X, Y});
  while (!(v.back()[0] == 1 && v.back()[1] == 1))
  {
    if (v.back()[0] > v.back()[1])
      v.push_back({v.back()[0] - v.back()[1], v.back()[1]});
    else
      v.push_back({v.back()[0], v.back()[1] - v.back()[0]});
  }
  cout << v.size() - 1 << endl;
  for (int i = v.size() - 2; i >= 0; i--)
  {
    cout << v[i][0] << " " << v[i][1] << endl;
  }
  return (0);
}