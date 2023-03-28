class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1,c=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                p*=nums[i];
            }else{
                c++;
            }
        }
        if(c==0){
            for(int i=0;i<nums.size();i++){
                v.push_back(p/nums[i]);
            }
        }else if(c==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    v.push_back(p);
                }else{
                    v.push_back(0);
                }
            }
        }else{
            for(int i=0;i<nums.size();i++){
                v.push_back(0);
            }
        }
        return v;
    }
};
