#include<string>
class Solution {
public:
    std::string countAndSay(int n) {
      if (n == 1) return "1";
      std::string inp = countAndSay(n-1);
      std::string out = "";
      char c = inp[0];
      int count = 1;
      for (int i = 1; i < inp.length(); i++) {
          if(inp[i] != c) {
              out += std::to_string(count) + c;
              c = inp[i];
              count = 0;
          }
          count++;
      }
      if (count > 0) out += std::to_string(count) + c;
      return out;
    }
};

/*
 * 1 = 1
 * 2 = 11
 * 3 = 21
 * 4 = 1211
 * 5 = 111221
 * 6 = 312211
 * 7 = 13112221
 * 8 = 1113213211
 *
 *
 *
 */

