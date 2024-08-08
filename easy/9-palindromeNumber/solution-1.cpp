#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    string s = to_string(x);
    string sInReverse = to_string(x);

    reverse(sInReverse.begin(), sInReverse.end());

    return s == sInReverse;
  }
};

int main()
{
  Solution solution;

  int x = 121;

  bool result = solution.isPalindrome(x);

  std::cout << result << std::endl;

  return 0;
}
