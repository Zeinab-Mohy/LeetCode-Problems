class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int c=1;
        if(nums.size()!=1){
            for(int i=0;i<nums.size()-1;i++){
                if(c<3){
                    if(nums[i]==nums[i+1]){
                        c++;
                    }else{
        //                cout<<nums[i];
                        ans= nums[i];
                        break;
                    }
                }else if(c==3){
                    c=1;
                }
            }
            if(nums[nums.size()-1]!=nums[nums.size()-2]){
        //        cout<<nums[nums.size()-1];
                ans= nums[nums.size()-1];
            }
            return ans;
        }else{
            return nums[0];
        }
    }
    
};
