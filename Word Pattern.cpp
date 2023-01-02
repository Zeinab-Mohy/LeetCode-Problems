class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<vector<char>>v;
        vector<char>vv;
        int x=0;
        for(int i=0;i<s.length();i++){
            if(i==s.length()-1){
                vv.push_back(s[i]);
                v.push_back(vv);
                vv.clear();
                break;
            }
            else if(s[i]!=' '&&i!=s.length()-1){
                vv.push_back(s[i]);
            }else if(s[i]==' '){
                v.push_back(vv);
                vv.clear();
            }
        }
        vector<pair<int,int>>p;
        for(int i=0;i<pattern.length();i++){
            for(int ii=i+1;ii<pattern.length();ii++){
                if(pattern[i]==pattern[ii]){
                    p.push_back({i,ii});//0,3  1,2
                }
            }
        }
        int ans=0,c=0;
        for(int i=0;i<p.size();i++){
            // cout<<p[i].first<<" "<<p[i].second<<"\n";
            if(v[p[i].first].size()==v[p[i].second].size()){
                for(int ii=0;ii<v[p[i].first].size();ii++){
                    if(v[p[i].first][ii]==v[p[i].second][ii]){
                        c++;
                    }else{
                        break;
                    }
                }
                if(c==v[p[i].first].size()){
                    ans++;
                }
            }else{
                break;
            }
            c=0;
        }
        map<char,int>mp;
        map<string,int>mpp;
        vector<string>hh;
        for(int i=0;i<pattern.length();i++){
            mp[pattern[i]]++;
        }
        for(int i=0;i<v.size();i++){
            string h="";
            for(int ii=0;ii<v[i].size();ii++){
                h+=v[i][ii];
            }
            hh.push_back(h);
        }
        for(int i=0;i<hh.size();i++){
            mpp[hh[i]]++;
        }
        if(hh.size()==pattern.size()){
            if(mpp.size()==mp.size()){
                if(ans==p.size()){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }else{
            return false;
        }

    }
};
