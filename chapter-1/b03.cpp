#include <iostream>

using namespace std;

int main(void)
{
  int n;
  int a[101];
  bool flag = false;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if ((a[i] + a[j] + a[k]) == 1000)
          flag = true;
      }
    }
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (0);
}