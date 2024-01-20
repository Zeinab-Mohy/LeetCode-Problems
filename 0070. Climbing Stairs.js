/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    if(n==1){
            return 1;
        }else if(n==2){
            return 2;
        }else{
            let n1=1,n2=2,n3;
            for(let i=2;i<n;i++){
                n3=n1+n2;
                n1=n2;    
                n2=n3;    
            }
            return n3;
        }
};
