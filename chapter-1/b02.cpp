#include <iostream>

int main(void)
{
  int a, b;
  std::cin >> a >> b;
  bool flag = false;
  int tmp;
  for (int i = a; i <= b; i++)
  {
    tmp = 100 % i;
    if (tmp == 0)
    {
        flag = true;
        break;
    }
  }
  if (flag)
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return (0);
}