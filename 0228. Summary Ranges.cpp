class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<long long>v;
        vector<string>ans;
        bool ch=0;
        if(nums.size()==0){
            ans.clear();
        }else{
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]+1==nums[i+1]){
                    cout<<nums[i]<<" "<<nums[i+1]<<"\n";
                    ch=1;
                    v.push_back(nums[i]);
                    v.push_back(nums[i+1]);
                }else{
                    if(ch==1&&v.size()>1){
                        string s=to_string(v[0]);
                        string e=to_string(v[v.size()-1]);
                        string ss=s+"->"+e;
                        ans.push_back(ss);
                    }else{
                        string s=to_string(nums[i]);
                        ans.push_back(s);
                    }
                    v.clear();
                    ch=0;
                }
            }
            if(ch==1&&v.size()>1){
                string s=to_string(v[0]);
                string e=to_string(v[v.size()-1]);
                string ss=s+"->"+e;
                ans.push_back(ss);
            }else{
                string s=to_string(nums[nums.size()-1]);
                ans.push_back(s);
            }
        }
        return ans;
    }
};
