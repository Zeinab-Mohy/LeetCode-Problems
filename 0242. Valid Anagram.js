/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    s=s.split('');
    s.sort();
    t=t.split('');
    t.sort();
    let ch=0;
    let max=Math.max.apply(Math,[s.length,t.length]);
    for(let i=0;i<max;i++){
        if(s[i]==t[i]){
            continue;
        }else{
            ch=1;
            break;
        }
    }
    if(ch==1){
        return false;
    }else{
        return true;
    }
};
