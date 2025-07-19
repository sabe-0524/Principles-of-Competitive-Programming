#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

int main(void)
{
  int N;
  int index;
  string S;
  cin >> N >> S;
  vector<int> v;
  v.push_back(1);
  for (int i = 0; i < S.size(); i++)
  {
    if (S[i] == 'A')
      v.push_back(v.back() + 1);
    else
    {
      v.push_back(1);
      index = v.size() - 1;
      while (v[index] == v[index - 1])
      {
        v[index - 1]++;
        index--;
      }
    }
  }
  cout << accumulate(v.begin(), v.end(), 0) << endl;
}