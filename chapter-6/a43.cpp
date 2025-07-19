#include <iostream>
using namespace std;

int main(void)
{
  int N, L;
  cin >> N >> L;
  int A;
  char B;
  int m = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A >> B;
    if (B == 'E')
    {
      if (m < L - A)
        m = L - A;
    }
    else
    {
      if (m < A)
        m = A;
    }
  }
  cout << m << endl;
}