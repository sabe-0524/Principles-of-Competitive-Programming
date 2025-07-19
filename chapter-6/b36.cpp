#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  int count = std::count(s.begin(), s.end(), '1');
  if ((count - k) % 2 == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (0);
}