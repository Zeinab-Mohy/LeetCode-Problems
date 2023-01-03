class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<int>>v;
        int k=0,kk=0;
        for(int i=0;i<strs[0].size();i++){
            vector<int>vv;
            for(int ii=i;k<strs.size();){
                string x=strs[k];
                // cout<<x[ii]<<" ";
                vv.push_back(x[ii]);
                k++;
            }
            v.push_back(vv);
            k=0;
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            vector<int>ans;
            for(int ii=0;ii<v[i].size();ii++){
                ans.push_back(v[i][ii]);
            }
            if(is_sorted(ans.begin(),ans.end())==false){
                c++;
            }
        }
        return c;
    }
};
