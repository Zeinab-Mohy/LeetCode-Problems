/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    let ans=0;
    let x=1;
    let counter =1;
    for(let i=1;i<=n;i++){
        if(i%8==0){
            // console.log(i);
            // console.log(x-1);
            counter++;
            i++;
            n++;
            x=counter;
            // console.log(x);
        }
        // console.log(x);
        ans+=x;
        x++;
    }
    return ans;
};
