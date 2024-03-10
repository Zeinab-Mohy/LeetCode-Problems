/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let numOne={};
    let numTwo={};

    nums1.forEach((ele)=>{
        if(numOne[ele]){
            numOne[ele]++;
        }else{
            numOne[ele]=1;
        }
    })

    nums2.forEach((ele)=>{
        if(numTwo[ele]){
            numTwo[ele]++;
        }else{
            numTwo[ele]=1;
        }
    })

    let ans=[];
    if(Object.keys(numOne).length > Object.keys(numTwo).length){
        for(let i=0;i<Object.keys(numTwo).length;i++){
            if(Object.keys(numOne).includes(Object.keys(numTwo)[i])){
                ans.push(Object.keys(numTwo)[i]);
            }
        }
    }else{
        for(let i=0;i<Object.keys(numOne).length;i++){
            if(Object.keys(numTwo).includes(Object.keys(numOne)[i])){
                ans.push(Object.keys(numOne)[i]);
            }
        }
    }
    return ans;
};
