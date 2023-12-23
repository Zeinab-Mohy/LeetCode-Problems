/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function(s) {
    let one=[],zero=[];
    let ans=[];
    for(let i=0;i<s.length;i++){
        if(s[i]=="0"){
            zero.push(i);
        }else{
            one.push(i);
        }
    }
    if(zero.length==0||one.length==0){
        return s.length-1;
    }else{
        for(let i=0;i<zero.length;i++){
            let z=zero[i];
            let x=one.filter((ele)=>ele>z);
            if(x.length==0){
                if(z==s.length-1){
                    break;
                }else{
                    ans.push(i+1);
                }
            }else{
                ans.push(x.length+(i+1));
            }
        }
        ans.push((s.length-1)-zero.length);
        return Math.max.apply(Math,ans);
    }
};
