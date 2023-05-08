class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        vector<char>v;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                v.push_back(it.first);
            }
        }
        if(v.size()!=0){
            vector<int>ans;
            for(int i=0;i<v.size();i++){
                for(int ii=0;ii<s.length();ii++){
                    if(v[i]==s[ii]){
                        ans.push_back(ii);
                    }
                }
            }
            sort(ans.begin(),ans.end());
            return ans[0];
        }else{
            return -1;
        }
    }
};
