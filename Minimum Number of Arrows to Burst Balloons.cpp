class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int x=points[0][1];
        int c=1;
        for(int i=0;i<points.size();i++){
            if(x<points[i][0]){
                x=points[i][1];
                c++;
            }
            x = min(x, points[i][1]);
        }
        return c;
    }
};
