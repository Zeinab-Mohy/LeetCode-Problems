class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int c=0,cc=0;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(!st.empty()){
                if(s[i]!=st.top()){
                    st.pop();
                    if(st.empty()){
                        v.push_back(i);
                    }
                }
                else if(s[i]==st.top()){
                    st.push(s[i]);
                }
            }
            else if(st.empty()){
                v.push_back(i);
                st.push(s[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            // s.erase(v[i]-i,v[i]+1-i);
            // cout<<v[i]-i<<" "<<v[i]+1-i<<"\n";
            // cout<<s.length()<<"\n";
            // cout<<s[v[i]-i]<<" "<<s[v[i+1]-i]<<"\n";
            s.erase(v[i]-i,1);
            // cout<<s<<"\n";
            // break;
        }
        return s;
    }
};
