#include <functional>
#include <iostream>

// We don't know what fn will be. std::function works with regular functions and lambdas.
// c++ 20 is capable of running fns in auto (preferred), otherwise use functions
void repeat(int repetitions, const std::function<void(int)>& fn)
{
  for (int i{ 0 }; i < repetitions; ++i)
  {
    fn(i);
  }
}

int main()
{
  repeat(3, [](int i) {
    std::cout << i << '\n';
  });

  return 0;
}