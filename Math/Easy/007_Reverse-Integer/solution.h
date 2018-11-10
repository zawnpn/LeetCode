#include <cmath>
class Solution {
public:
    int reverse(int x) {
        int rev = 0, y = abs(x),tmp;
        while(y!=0)
        {
            tmp = rev;
            rev = rev*10 + y%10;
            if((rev-y%10)/10!=tmp)
            {
                return 0;
            }
            y /= 10;
        }
        if(x<0)
        {
            rev = 0-rev;
        }
        return rev;
    }
};