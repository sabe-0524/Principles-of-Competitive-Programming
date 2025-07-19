#include <iostream>
using namespace std;

int x[10004];

int main(void)
{
  int Q;
  bool flag;
  cin >> Q;
  for (int i = 0; i < Q; i++)
    cin >> x[i];
  for (int i = 0; i < Q; i++)
  {
    flag = false;
    for (int j = 2; j * j <= x[i]; j++)
    {
      if (x[i] % j == 0)
      {
        cout << "No" << endl;
        flag = true;
        break;
      }
    }
    if (flag == false)
      cout << "Yes" << endl;
  }
  return (0);
}