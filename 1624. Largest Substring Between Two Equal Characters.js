/**
 * @param {string} s
 * @return {number}
 */
var maxLengthBetweenEqualCharacters = function(s) {
    let ans=[];
    for(let i=0;i<s.length;i++){
        let x=-1,xx=-1;
        for(let ii=s.length-1;ii>=i+1;ii--){
            if(s[i]==s[ii]){
                console.log(s[i],s[ii]);
                x=ii;
                xx=i;
                console.log(xx,x);
                break;
            }
        }
        if(x!=-1){
            ans.push((x-xx)-1);
        console.log((x-xx)-1);
        }
    }
    if(ans.length==0){
        return -1;
    }else{
        ans=ans.sort((a,b)=>b-a);
        return ans[0];
    }
};
