#include <iostream>
using namespace std;

int main(void)
{
  int n;
  int ans = 0;
  int i = 0;
  
  cin >> n;
  while (n)
  {
    ans += (n % 10) * (1 << i);
    n /= 10;
    i++;
  }
  cout << ans << endl;
  return (0);
}