class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int>v;
        vector<int>ans;
        map<int,int>mp;
        int c=1;
        if(nums.size()>=1){
            for(int i=0;i<nums.size();i++){
                mp[nums[i]];
            }
            for(auto it:mp){
                v.push_back(it.first);
            }
            for(int i=0;i<v.size()-1;i++){
                if(abs(v[i]-v[i+1])==1){
                    c++;
                }else{
                    ans.push_back(c);
                    c=1;
                }
            }
            ans.push_back(c);
            int x=*max_element(ans.begin(),ans.end());
            return x;
        }else{
            return 0;
        }
    }
};
