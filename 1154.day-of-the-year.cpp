#include <string>   
#include <vector>
class Solution {
public:
    int dayOfYear(std::string date) {
       // parse the date
       int yy = std::stoi(date.substr(0,4));
       int mm = std::stoi(date.substr(5,2));
       int dd = std::stoi(date.substr(8,2));

       int res = dd;
       std::vector<int> month( {31,28,31,30,31,30,31,31,30,31,30,31} );
       if ( (yy % 400 == 0) || ((yy % 4 == 0) && (yy % 100 != 0)))
       {
           month[1] = 29;
       }
       for(int i = 0; i < mm-1; i++)
       {
           res += month[i];
       }
       return res;
    }
};
