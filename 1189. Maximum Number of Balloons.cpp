class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        vector<pair<int,char>>v;
        vector<int>ans;
        vector<int>anss;
        for(int i=0;i<text.length();i++){
            mp[text[i]]++;
        }
        for(auto it:mp){
            if(it.first=='b'||it.first=='a'
            ||it.first=='n'){
                v.push_back({it.second,it.first});
            }else if(it.first=='l'||it.first=='o'){
                if(it.second>1){
                    v.push_back({it.second,it.first});
                }
            }
        }
        if(v.size()==5){
            // sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
                if(v[i].second=='l'||v[i].second=='o'){
                    ans.push_back(v[i].first);
                }
            }
            sort(ans.begin(),ans.end());
            if(ans.size()==2){
                int xx= ans[0]/2;
                for(int i=0;i<v.size();i++){
                    if(v[i].second!='l'&&v[i].second!='o'){
                        if(v[i].first>=xx){
                            continue;
                        }else{
                            anss.push_back(v[i].first);
                        }
                    }
                }
                if(anss.size()>0){
                    return *min_element(anss.begin(),anss.end());
                }else{
                    return xx;
                }
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }
};
