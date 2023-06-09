class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            vector<int>v=grid[i];
            sort(v.begin(),v.end());
            for(int ii=0;ii<v.size();ii++){
                if(v[ii]<0){
                    count++;
                }
            }
        }
        return count;
    }
};
