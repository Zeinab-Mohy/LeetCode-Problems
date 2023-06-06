class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool ch=0;
        sort(arr.begin(),arr.end());
        int xx=abs(arr[0]-arr[1]);
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==xx){
                continue;
            }else{
                ch=1;
                break;
            }
        }
        if(ch==1){
            return false;
        }else{
            return true;
        }
    }
};
