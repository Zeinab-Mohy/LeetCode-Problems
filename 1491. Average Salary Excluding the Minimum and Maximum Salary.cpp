class Solution {
public:
    double average(vector<int>& salary){
        double sum=0; 
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        int s=salary.size()-2;
        double ans=sum/s;
        return ans;
    }
};
