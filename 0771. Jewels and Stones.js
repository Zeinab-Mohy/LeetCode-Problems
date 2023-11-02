/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let c=0;
    for(let i=0;i<stones.length;i++){
        let x=jewels.indexOf(stones[i]);
        if(x!=-1){
            c++;
            stones[x]='1';
        }
    }
    return c;
};
