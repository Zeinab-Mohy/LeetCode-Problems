class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int ii=i+1;ii<nums.size();ii++)
            {
                if(nums[i]+nums[ii]==target)
                {
                    v.push_back(i);
                    v.push_back(ii);
                    break;
                }
            }
            if(v.size()==2)
            {
                break;
            }
        }
            return v;
    }
};
