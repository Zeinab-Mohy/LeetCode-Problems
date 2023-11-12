/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
var groupThePeople = function(groupSizes) {
    let ans = [];
    for(let i=0;i<groupSizes.length;i++){
        let x=groupSizes[i];
        let c=x;
        let xx=[];
        for(let ii=i;ii<groupSizes.length;ii++){
            if(groupSizes[ii]==x&&c>0){
                xx.push(ii);
                groupSizes[ii]=-1;
                c--;
            }
        }
        if(xx.length!=0){
            ans.push(xx);
        }
    }
    return ans;
};
