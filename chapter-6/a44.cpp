#include <iostream>
#include <vector>
using namespace std;

int A[200005];

int main(void)
{
  int N, Q;
  cin >> N >> Q;
  for (int i = 0; i <= N; i++)
    A[i] = i;
  int a, b, c;
  vector<int> v;
  bool rev = false;
  for (int i = 0; i < Q; i++)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> b >> c;
      if (rev == true)
        b = N - b + 1;
      A[b] = c;
    }
    else if (a == 2)
      rev = !rev;
    else
    {
      cin >> b;      
      if (rev == true)
        b = N - b + 1;
      v.push_back(A[b]);
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }
  return (0);
}