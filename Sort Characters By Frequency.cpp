class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        vector<pair<int,char>>v;
        string ss="";
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            for(int ii=0;ii<v[i].first;ii++){
                 ss+= v[i].second;
            }
        }
        return ss;
    }
};
