class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<int>ans1;
        for(int i=0;i<nums1.size();i++){
            ans1.push_back(nums1[i][0]);
        }
        for(int i=0;i<nums2.size();i++){
            if(count(ans1.begin(), ans1.end(),nums2[i][0])){
                continue;
            }else{
                ans1.push_back(nums2[i][0]);
            }
        }
        sort(ans1.begin(),ans1.end());
        // for(int i=0;i<ans1.size();i++){
    //        cout<<ans1[i]<<" ";
        // }
        vector<vector<int>>ans;
        int size=ans1.size();
        for(int i=0;i<size;i++){
            ans.push_back({ans1[i],0});
        }
        // for(int i=0;i<ans.size();i++){
            // for(int ii=0;ii<ans[i].size();ii++){
    //            cout<<ans[i][ii]<<" ";
            // }
    //        cout<<"\n";
        // }
        for(int i=0;i<ans.size();i++){
            for(int ii=0;ii<nums1.size();ii++){
                if(nums1[ii][0]==ans[i][0]){
                    ans[i][1]+=nums1[ii][1];
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int ii=0;ii<nums2.size();ii++){
                if(nums2[ii][0]==ans[i][0]){
                    ans[i][1]+=nums2[ii][1];
                }
            }
        }
        // for(int i=0;i<ans.size();i++){
        //     for(int ii=0;ii<ans[i].size();ii++){
        //         cout<<ans[i][ii]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return ans;
    }
};
