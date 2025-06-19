#include <iostream>

int main(void)
{
  int n, x;
  int a;

  std::cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a;
    if (x == a)
    {
      std::cout << "Yes" << std::endl;
      return (0);
    }
  }
  std::cout << "No" << std::endl;
  return (0);
}