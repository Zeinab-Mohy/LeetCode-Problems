/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    let ch=0;
    for(let i=0;i<=Math.sqrt(n);i++){
        let x=4**i;
        if(x===n){
            ch=1;
            break;
        }
    }
    if(ch===0){
        return false;
    }else{
        return true;
    }
};
