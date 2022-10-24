/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let mapp=new Map();
    for(let i=0;i<nums.length;i++){
        if(mapp.has(nums[i]))return true;
     mapp.set(nums[i],1);
    }
    return false;
};