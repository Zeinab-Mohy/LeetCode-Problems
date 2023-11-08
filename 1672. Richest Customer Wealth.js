/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let ans=[];
    for(let i=0;i<accounts.length;i++){
        let sum=0;
        for(let ii=0;ii<accounts[i].length;ii++){
            sum+=accounts[i][ii];
        }
        ans.push(sum);
    }
    return Math.max.apply(Math,ans);
};
