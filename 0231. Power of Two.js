/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    for(let i=0;i<=Math.ceil(Math.sqrt(n));i++){
        if(Math.pow(2,i)==n){
            return true;
        }
    }
    return false;
};
