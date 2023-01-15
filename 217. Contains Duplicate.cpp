class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int x=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            x=max(x,mp[nums[i]]);
        }
        if(x>1){
            return true;
        }else{
            return false;
        }
    }
};
