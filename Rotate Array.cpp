class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        vector<int>aa;
        long long x=nums.size()-k,y;
        if(x>=0){
            for(int i=x;i<nums.size();i++){
                ans.push_back(nums[i]);
            }
            for(int i=0;i<x;i++){
            ans.push_back(nums[i]); 
            }
            // nums.clear();
            for(int i=0;i<ans.size();i++){
                nums[i]=ans[i];
            }
        }else{
            x=k-nums.size();
            y=nums.size()-x;
            int xx=0,k=nums.size()-1;
            for(int i=0;i<x;i++){
                if(k==-1){
                    k=nums.size()-1;
                }
                xx=k;
                k--;
            }
            for(int i=xx;i<nums.size();i++){
                ans.push_back(nums[i]);
            }
            for(int i=0;i<xx;i++){
                ans.push_back(nums[i]); 
            }
            // nums.clear();
            for(int i=0;i<ans.size();i++){
                nums[i]=ans[i];
            }
        }
    }
};
