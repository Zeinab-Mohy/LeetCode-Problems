/**
 * @param {string} s
 * @return {boolean}
 */
var halvesAreAlike = function(s) {
    let a=s.slice(0,s.length/2).toLowerCase();
    let b=s.slice(s.length/2,s.length).toLowerCase();
    let ac=0,bc=0;
    for(let i=0;i<a.length;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]== 'i'||a[i]== 'o'||a[i]=='u'){
            ac++;
        }
    }
    for(let i=0;i<b.length;i++){
        if(b[i]=='a'||b[i]=='e'||b[i]== 'i'||b[i]== 'o'||b[i]=='u'){
            bc++;
        }
    }
    if(ac==bc){
        return true;
    }else{
        return false;
    }
};
