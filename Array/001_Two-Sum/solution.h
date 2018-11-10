#include <vector>
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int sz = nums.size();
        for (int i=0;i<sz;i++)
        {
            for (int j=i+1;j<sz;j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};