/**
 * @param {number} n
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function(n, trust) {
    let ans=[],judge=[];

    for(let i=0;i<trust.length;i++){
        ans.push(trust[i][0]);
        judge.push(trust[i][1]);   
    }
    ans=ans.sort((a,b)=>a-b);
    let ans2=new Set(ans);
    // console.log(ans2);
    let x=-1;
    for(let i=1;i<=n;i++){
        if(ans2.has(i)){
            continue;
        }else{
            x=i;
        }
    }
    // console.log(x);
    let c=0;
    if(x!=-1){
        for(let i=0;i<judge.length;i++){
            if(judge[i]==x){
                c++;
            }
        }
        if(c==n-1){
            return x;
        }else{
            return -1;
        }
    }else{
        return -1;
    }
    
};
