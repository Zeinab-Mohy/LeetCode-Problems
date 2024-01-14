/**
 * @param {string} word1
 * @param {string} word2
 * @return {boolean}
 */
var closeStrings = function(word1, word2) {
   if(word1.length==word2.length){
        let map1=new Map();
        let set1=new Set(word1);
        let set2=new Set(word2);
        if(set1.size==1&&set2.size==1){
            if(word1[0]==word2[0]){
                return true;
            }else{
                return false;
            }
        }
        let arr=[];
        set1.forEach((ele)=>{
            arr.push(ele);
        })
        let word11=word1.split('');
        word1=word1.split('').sort();
        arr=arr.sort();
        for(let i=0;i<arr.length;i++){
            let c=0;
            for(let ii=0;ii<word1.length;ii++){
                if(arr[i]==word1[ii]){
                    c++;
                }
            }
            map1.set(arr[i],c);
        }
        // console.log(map1);
        let arrr=[];
        
        let map2=new Map();
        set2.forEach((ele)=>{
            arrr.push(ele);
        })
        let word22=word2.split('');
        word2=word2.split('').sort();
        arrr=arrr.sort();
        for(let i=0;i<arr.length;i++){
            let c=0;
            for(let ii=0;ii<word2.length;ii++){
                if(arrr[i]==word2[ii]){
                    c++;
                }
            }
            map2.set(arrr[i],c);
        }
        let xx=0;
        for(let i=0;i<arr.length;i++){
            if(arr[i]==arrr[i]){
                xx++;
            }
        }
        if(xx==arr.length){
            let arr1=[],arr2=[];
            map1.forEach((ele)=>{
                arr1.push(ele);
            })
            map2.forEach((ele)=>{
                arr2.push(ele);
            })
            let ans=0;
            arr1=arr1.sort((a,b)=>a-b);
            arr2=arr2.sort((a,b)=>a-b);
            for(let i=0;i<arr1.length;i++){
                if(arr1[i]==arr2[i]){
                    ans++;
                }
            }
            if(ans==arr1.length){
                return true;
            }else{
                return false;
            }
        }else{
            // console.log(map1);
            let arr1=[],arr2=[];
            for(let i=0;i<word11.length;i++){
                for(let [key,val] of map1){
                    if(word11[i]==key){
                        arr1.push(val);
                        break;
                    }
                    // console.log(key);
                }
            }
            // console.log(arr1);
            for(let i=0;i<word22.length;i++){
                for(let [key,val] of map2){
                    if(word22[i]==key){
                        arr2.push(val);
                        break;
                    }
                    // console.log(key);
                }
            }
            let ans=0;
            for(let i=0;i<arr1.length;i++){
                if(arr1[i]==arr2[i]){
                    ans++;
                }
                // console.log(arr1[i],arr2[i]);
            }
            if(ans==arr1.length){
                return true;
            }else{
                return false;
            }
        }
        
    }else{
        return false;
    }
};
