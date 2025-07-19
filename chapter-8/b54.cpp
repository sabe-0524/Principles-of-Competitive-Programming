#include <iostream>
#include <map>
using namespace std;
using ll = long long;

int main(void)
{
  int N;
  int a;
  cin >> N;
  map<int, int> m;
  ll answer = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    answer += m[a];
    m[a]++;
  }
  cout << answer << endl;
}