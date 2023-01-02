class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>vv;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            vv.push_back(it.second);
        }
        int ans=0;
        int m=*max_element(vv.begin(),vv.end());
        for(auto it:mp){
            if(it.second==m){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};
