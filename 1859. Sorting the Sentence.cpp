class Solution {
public:
    string sortSentence(string s) {
        string ss="";
        string x="";
        vector<pair<int,string>>v;
        for(int i=0;i<s.length();i++){
            if(s[i]>=48&&s[i]<=57){
                x=s[i];
                int xx=stoi(x);
                v.push_back({xx,ss});
                ss="";
            }else if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)){
                ss+=s[i];
            }
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i].second;
            ans+=" ";
        }
        ans+=v[v.size()-1].second;
        return ans;
    }
};
