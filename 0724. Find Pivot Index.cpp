class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        bool ch=0;
        int ans;
        int p1[nums.size()],p2[nums.size()];
        p1[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            p1[i]=p1[i-1]+nums[i];
        }
        reverse(nums.begin(),nums.end());
        p2[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            p2[i]=p2[i-1]+nums[i];
        }
        reverse(p2,p2+nums.size());
        for(int i=0;i<nums.size();i++){
            if(p1[i]==p2[i]){
                ch=1;
                ans=i;
                break;
            }
        }
        if(ch==1){
            return ans;
        }else{
            return -1;
        }
    }
};
