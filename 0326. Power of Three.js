/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    if(n>0){
        for(let i=0;i<=n;i++){
            let x=Math.pow(3,i);
            if(x==n){
                return true;
            }else if(x>n){
                return false;
            }
        }
    }else{
        return false;
    }
};
