class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int c=0,g=0;
        for(int i=0;i<gas.size();i++){
            g+=gas[i];
        }
        for(int i=0;i<cost.size();i++){
            c+=cost[i];
        }
        if(g<c){
            return -1;
        }else{
            int ans=0,x=0;
            for(int i=0;i<gas.size();i++){
                 x+=gas[i]-cost[i];
                if(x<0){
                    x=0;
                    ans=i+1;
                }
            }
            return ans;
        }
    }
};
