class Solution {
public:
    string reverseWords(string s) {
        vector<char>vv;
        vector<vector<char>>v;
        for(int i=0;i<s.length();i++){
            if(i==s.length()-1&&s[i]!=' '){
                vv.push_back(s[i]);
                reverse(vv.begin(),vv.end());
                v.push_back(vv);
                vv.clear();
            }
            else if(s[i]==' '){
                reverse(vv.begin(),vv.end());
                v.push_back(vv);
                vv.clear();
            }else{
                vv.push_back(s[i]);
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            for(int ii=0;ii<v[i].size();ii++){
                ans+=v[i][ii];
            }
            if(i!=v.size()-1){
                ans+=" ";
            }
        }
        return ans;
    }
};
