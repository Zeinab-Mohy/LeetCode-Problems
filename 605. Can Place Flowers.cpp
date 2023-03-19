class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        vector<int>v;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i!=0&&i!=flowerbed.size()-1){
                    if(flowerbed[i-1]==0&&flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        c++;
                    }
                }else if(i==0&&i!=flowerbed.size()-1){
                    if(flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        c++;
                    }
                }else if(i!=0&&i==flowerbed.size()-1){
                    if(flowerbed[i-1]==0){
                        flowerbed[i]=1;
                        c++;
                    }
                }else if(i==0&&i==flowerbed.size()-1){
                    flowerbed[i]=1;
                    c++;
                }
            }
        }
        if(c>=n){
            return true;
        }else{
            return false;
        }
    }
};
