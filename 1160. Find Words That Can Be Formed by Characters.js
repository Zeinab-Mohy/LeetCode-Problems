/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
var countCharacters = function(words, chars) {
    let chars2=chars;
    let cc=0;
    for(let i=0;i<words.length;i++){
        let c=0;
        chars=chars2;
        for(let ii=0;ii<words[i].length;ii++){
            let x=chars.indexOf(words[i][ii]);
            chars=chars.replace(chars[x],'-');
            // console.log(x);
            if(x==-1){
                c=0;
                break;
            }else{
                c++;
            }
        }
        cc+=c;
        // console.log(c);
    }
    return cc;
};
