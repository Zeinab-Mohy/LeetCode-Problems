class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<pair<char,int>>v;
        vector<pair<char,int>>vv;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        for(auto it:mp1){
            v.push_back({it.first,it.second});
        }
        for(auto it:mp2){
            vv.push_back({it.first,it.second});
        }
        bool ch=0;
        if(v.size()==vv.size()){
            for(int i=0;i<v.size();i++){
                if(v[i].first==vv[i].first){
                    if(v[i].second==vv[i].second){
                        continue;
                    }else{
                        ch=1;
                        break;
                    }
                }else{
                    ch=1;
                    break;
                }
            }
            if(ch==1){
                return false;
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
};
