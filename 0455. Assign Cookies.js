/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    let ans=0;
    let max=Math.max.apply(Math,g);
    g=g.sort((a,b)=>a-b);
    s=s.sort((a,b)=>a-b);
    for(let i=0;i<s.length;i++){
        for(let ii=0;ii<g.length;ii++){
            if(s[i]>=g[ii]){
                g[ii]=Number.MAX_SAFE_INTEGER;
                s[i]=0;
                ans++;
            }
        }
    }
    return ans;
};
