class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string>v;
        vector<int>ans;
        vector<pair<int,int>>len;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            len.push_back({s.length(),i});
            v.push_back(s);
        }
        sort(len.begin(),len.end());//i=1
        string x=v[len[0].second];
        int l=x.length();
        for(int ii=0;ii<v.size();ii++){
            string ss=v[ii];
            int c=0,i=0;
            for(int j=0;j<ss.length();j++){
                if(i<l&&ss[j]==x[i]){
                    c++;
                }else{
                    break;
                }
                i++;
            }
            ans.push_back(c);
        }
        sort(ans.begin(),ans.end());
        string a="";
        for(int i=0;i<ans[0];i++){
            a+=x[i];
        }
        return a;
    }
};
