class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        vector<int>ans={nums[0]};
        for(int i=0;i<nums.size()-1;i++){
            int sum=nums[i];
            while (i<nums.size()-1&&nums[i]<nums[i+1]){
                sum+=nums[i+1];
                i++;
            }
            ans.push_back(sum);
        }
        int maxx=0;
        for(int i=0;i<ans.size();i++){
            maxx=max(maxx,ans[i]);
        }
        return maxx;
    }
};
