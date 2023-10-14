/**
 * @param {number[]} nums
 * @return {void}
 */
var ArrayWrapper = function(nums) {
    this.nums=nums;
};

/**
 * @return {number}
 */
ArrayWrapper.prototype.valueOf = function() {
    let a= this.nums.flat();
    let sum=0;
    for(let i=0;i<a.length;i++){
        sum+=a[i];
    }
    return sum;
}

/**
 * @return {string}
 */
ArrayWrapper.prototype.toString = function() {
    let l=this.nums.length;
    let x="";
    for(let i=0;i<l;i++){
        x+= this.nums[i].toString();
        x+="C";
    }
    let rex=/\d+C/g;
    if(x.match(rex)==null){
        return "[]";
    }else{
        return `[${x.match(rex).join(",").replaceAll("C","")}]`;
    }
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */
