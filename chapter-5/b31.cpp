#include <iostream>
using namespace std;
using ll = long long;

int main(void)
{
  ll N;
  cin >> N;
  ll answer;
  answer = N/3 + N/5 + N/7 - N/15 - N/35 - N/21 + N/105;
  cout << answer << endl;
}