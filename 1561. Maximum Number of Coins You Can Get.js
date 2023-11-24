/**
 * @param {number[]} piles
 * @return {number}
 */
var maxCoins = function(piles) {
    let l = piles.length/3;
    let sort = piles.sort(function(a,b){return b-a});
    let c = 1,i=1,ans=0;
    while(c<=l){
        ans+=sort[i];
        i+=2;
        c++;
    }
    return ans;
};
