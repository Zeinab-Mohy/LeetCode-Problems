/**
 * @param {string} colors
 * @param {number[]} neededTime
 * @return {number}
 */
var minCost = function(colors, neededTime) {
    let ans=0;
    for(let i=0;i<colors.length-1;i++){
        let x=colors[i];
        let c=[];
        let count=0;
        if(colors[i]==colors[i+1]){
            c.push(neededTime[i]);
            while(colors[i]==colors[i+1]){
                count++;
                c.push(neededTime[i+1]);
                i++;
            }
        }
        // console.log(x);
        // console.log(count);
        // console.log(c);
        if(c.length!=0){
            c=c.sort((a,b)=>a-b);
            for(let j=0;j<count;j++){
                ans+=c[j];
            }
        }
    }
    return ans;
};
