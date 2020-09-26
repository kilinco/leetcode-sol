class Solution {
public:
    int romanToInt(string s) {
        int out = 0;
        unordered_map<char,int> d;
        d['I'] = 1;
        d['V'] = 5;
        d['X'] = 10;
        d['L'] = 50;
        d['C'] = 100;
        d['D'] = 500;
        d['M'] = 1000;
        int maximum = 0;     
        for(int i = s.length()-1; i >= 0; --i){
            if(maximum <= d[s[i]]){
                out += maximum;
                maximum = d[s[i]];
            }
            else maximum -= d[s[i]];
        }
        out += maximum;
        return out;
    }
};

/* Case 3 
 * s = 'I' 
 * exp = 1
 * 1.0 >> i = 0
 * 1.1 >> max = 0 
 * 1.2 >> out = 0 
 * 1.3 >> max = 1
 * 1 <<<< out = 0
 * <<<<<< out = 1
 */

/* Case 2
 * s = 'III'
 * exp = 3 
 * 1.0 >> i = 2
 * 1.1 >> max = 0 
 * 1.2 >> out = 0
 * 1.3 >> max = 1 
 * 1 <<<< out = 0
 * 2.0 >> i = 1
 * 2.1 >> max = 1
 * 2.2 >> out = 1
 * 2.3 >> max = 1
 * 2 <<<< out = 1 
 * 3.0 >> i = 0 
 * 3.1 >> max = 1
 * 3.2 >> out = 2 
 * 3.3 >> max = 1
 * 3 <<<< out = 2
 * <<<<<< out = 3 
*/

/* Case 1
 * s = 'LVIII'
 * exp = 58
 * 1.0 >> i = 4
 * 1.1 >> max = 0 
 * 1.2 >> out = 0 
 * 1.3 >> max = 1
 * 1 <<<< out = 0
 * 2.0 >> i = 3
 * 2.1 >> max = 1
 * 2.2 >> out = 1
 * 2.3 >> max = 1
 * 2 <<<< out = 1
 * 3.1 >> i = 2 
 * 3.2 >> max = 1
 * 3.3 >> out = 2
 * 3.4 >> max = 1 
 * 3 <<<< out = 2
 * 4.1 >> i = 1
 * 4.2 >> max = 1
 * 4.3 >> out = 3 
 * 4.4 >> max = 5
 * 4 <<<< out = 3 
 * 5.1 >> i = 0 
 * 5.2 >> max = 5 
 * 5.3 >> out = 8 
 * 5.4 >> max = 50
 * <<<<<< out = 58
*/

/* Case 0
 * s = 'IV'
 * exp = 4 
 * 1.0 >> i=1
 * 1.1 >> max = 0
 * 1.2 >> out = 0
 * 1.3 >> max = 5
 * 1 <<<< out = 0
 * 2.0 >> i = 0
 * 2.1 >> max = 5
 * 2.2 >> out = 0
 * 2.3 >> d[s[0]] = 1
 * 2.4 >> max > d[s[0]]
 * 2.5 >> max = 4
 * 2.6 >> out = 4
 * <<<<<< out = 4
 */
