class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>v;
        vector<int>s;
        reverse(arr.begin(),arr.end());
        int ans[arr.size()];
        ans[0]=-1;
        int x;
        for(int i=0;i<arr.size()-1;i++){
            if(ans[i]<arr[i]){
                x=arr[i];
                ans[i+1]=arr[i];
            }else{
                ans[i+1]=x;
            }
        }
        for(int i=0;i<arr.size();i++){
            s.push_back(ans[i]);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
