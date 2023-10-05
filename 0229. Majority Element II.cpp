class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        int n=nums.size();
        int x=n/3;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>x){
                v.push_back(it.first);
            }
        }
        return v;
    }
};
