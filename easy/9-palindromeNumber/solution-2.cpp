#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    string s = to_string(x);
    int sLength = s.length();
    int sHalfLength = floor(sLength / 2);

    int i = 0;
    int j = sLength - 1;

    while (i < sHalfLength)
    {
      if (s[i] != s[j]) {
        return false;
      }

      ++i;
      --j;
    }

    return true;
  }
};

int main()
{
  Solution solution;

  int x = 101;

  bool result = solution.isPalindrome(x);

  std::cout << result << std::endl;

  return 0;
}
