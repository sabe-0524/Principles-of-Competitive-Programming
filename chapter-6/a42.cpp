#include <iostream>
using namespace std;

int A[305];
int B[305];

int check(int i, int j, int N, int K)
{
  int total = 0;
  for (int k = 0; k < N; k++)
  {
    if (i <= A[k] && A[k] <= i + K && j <= B[k] && B[k] <= j + K)
      total++;
  }
  return (total);
}

int main(void)
{
  int N, K;
  cin >> N >> K;
  int tmp = 0, answer = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    cin >> B[i];
  }
  for (int i = 1; i <= 100; i++)
  {
    for (int j = 1; j <= 100; j++)
    {
      tmp = check(i, j, N, K);
      if (tmp > answer)
        answer = tmp;
    }
  }
  cout << answer << endl;
  return (0);
}