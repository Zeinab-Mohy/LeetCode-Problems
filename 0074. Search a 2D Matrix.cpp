class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ch=0;
        for(int i=0;i<matrix.size();i++){
            for(int ii=0;ii<matrix[i].size();ii++){
                if(matrix[i][ii]==target){
                    ch=1;
                    break;
                }
            }
        }
        if(ch==1){
            return true;
        }else{
            return false;
        }
    }
};
