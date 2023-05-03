class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>vv;
        vector<vector<int>>vvv;
        vector<int>ans;
        map<int,int>mp;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(auto it:mp1){
            v.push_back(it.first);
        }
        
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        for(auto it:mp2){
            v.push_back(it.first);
        }
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        for(int i=0;i<ans.size();i++){
            for(auto it:mp1){
                if(ans[i]==it.first){
                    vv.push_back(ans[i]);
                }
            }
        }
        vvv.push_back(vv);
        vv.clear();
        for(int i=0;i<ans.size();i++){
            for(auto it:mp2){
                if(ans[i]==it.first){
                    vv.push_back(ans[i]);
                }
            }
        }
        vvv.push_back(vv);
        return vvv;
    }
};
