class Solution {
public:
    int strStr(string x, string xx) {
        int ii=0;
        vector<int>v;
        for(int i=0;i<x.length();i++){
            if(x[i]==xx[0]){
                v.push_back(i);//0 6
            }
        }
        int ans=-1;
        for(int i=0;i<v.size();i++){
            int s=v[i],c=0;
            for(int ii=s,iii=0;ii<x.length(),iii<xx.length();ii++,iii++){
                if(x[ii]==xx[iii]){
                    c++;
                }else{
                    break;
                }
            }
            if(c==xx.length()){
                ans=s;
                break;
            }
        }
        return ans;
    }
};
