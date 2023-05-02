class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0,cc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                c++;
            }else if(nums[i]==0){
                cc++;
            }
        }
        if(cc!=0){
            return 0;
        }else{
            if(c!=0){
                if(c%2==0){
                    return 1;
                }else{
                    return -1;
                }
            }else{
                return 1;
            }
        }
    }
};
