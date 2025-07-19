#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

vector<array<int, 2>> t;

int main(void)
{
  int N;
  int l, r;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> l >> r;
    t.push_back({l, r});
  }
  sort(t.begin(), t.end(), [](auto const &p1, auto const &p2) {
    return p1[1] < p2[1];
  });
  int count = 0;
  int current = 0;
  for (int i = 0; i < N; i++)
  {
    if (current <= t[i][0])
    {
      count++;
      current = t[i][1];
    }
  }
  cout << count << endl;
  return (0);
}