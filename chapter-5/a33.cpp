#include <iostream>
using namespace std;

int main(void)
{
  int N;
  int a;
  int XOR_SUM;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    if (i == 0)
      XOR_SUM = a;
    else
      XOR_SUM = (XOR_SUM ^ a);
  }
  if (XOR_SUM == 0)
    cout << "Second" << endl;
  else
    cout << "First" << endl;
  return (0);
}