class Solution {
public:
    int arrangeCoins(int n) {
        int x=1,c=0;
        while(n>0){
            if(n>=x){
                n-=x;
                c++;
            }else{
                break;
            }
            x++;
        }
        return c;
    }
};
