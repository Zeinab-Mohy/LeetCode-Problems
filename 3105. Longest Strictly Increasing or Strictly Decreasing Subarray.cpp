class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<int>ans={1};
        int in=1,de=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                in++;
            }else{
                ans.push_back(in);
                in=1;
            }
            ans.push_back(in);
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                de++;
            }else{
                ans.push_back(de);
                de=1;
            }
            ans.push_back(de);
        }
        int maxx=0;
        for(int i=0;i<ans.size();i++){
            maxx=max(maxx,ans[i]);
        }
        return maxx;
    }
};
