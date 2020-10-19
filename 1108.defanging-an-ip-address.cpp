#include<iostream>
#include<string>
class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string t = "[.]";
        std::string s = ".";
        std::string::size_type n = 0;
        while ( ( n = address.find( s, n ) ) != std::string::npos )
        {
            address.replace( n, s.size(), t );
            n += t.size();
        }
        return address;
    }
};
