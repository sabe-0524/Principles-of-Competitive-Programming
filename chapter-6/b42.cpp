#include <iostream>
using namespace std;
using ll = long long;

int A[100005];
int B[100005];

int main(void)
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i] >> B[i];
  }
  ll total = 0, tmp = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] + B[i] > 0)
      total += A[i] + B[i];
  }
  for (int i = 0; i < N; i++)
  {
    if (A[i] + B[i] < 0)
      tmp += -(A[i] + B[i]);
    if (tmp > total)
      total = tmp;
  }
  tmp = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] - B[i] > 0)
      tmp += A[i] - B[i];
    if (tmp > total)
      total = tmp;
  }
  tmp = 0;
  for (int i = 0; i < N; i++)
  {
    if (-A[i] + B[i] > 0)
      tmp += -A[i] + B[i];
    if (tmp > total)
      total = tmp;
  }
  cout << total << endl;
  return (0);
}