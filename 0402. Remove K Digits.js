/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */
var removeKdigits = function(num, k) {
    let arr = num.split('');
    let newarr = [];
    for(let i=0;i<arr.length;i++){
        newarr.push(+ arr[i]);
    }
    if(newarr.length<=k){
        return '0';
    }else{
        for(let i=0;i<newarr.length-1;i++){
            if(k>0){
                    if(newarr[i+1]>=newarr[i]){
                        let xx=-1;
                        for(let j=i+1;j<newarr.length-1;j++){
                            if(newarr[j]<=newarr[j+1]){
                                xx=j+1;
                            }else{
                                break;
                            }
                        }
                        if(xx==-1){
                            newarr.splice(i+1,1);
                            i--;
                        }else{
                            newarr.splice(xx,1);
                            i--;
                        }
                    }else{
                        newarr.splice(i,1);
                        i--;
                    }
            }else{
                break;
            }
            k--;
        }
        let ans = newarr.join('');
        if(ans.length!=1&&ans[0]==0){
            for(let i=0;i<newarr.length-1;i++){
                if(newarr[i]==0){
                    newarr.shift();
                    i--;
                }else{
                    break;
                }
            }
            return newarr.join('');
        }else{
            return ans;
        }
    }
    
};
