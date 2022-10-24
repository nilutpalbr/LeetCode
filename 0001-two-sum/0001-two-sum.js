/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let mapp= new Map();
    let res=[];
    for(let i=0;i<nums.length;i++){
        if(mapp.has(target-nums[i])){
            let val=mapp.get(target-nums[i]);
            res.push(val);
            res.push(i);
        }
      mapp.set(nums[i],i);
    }
    return res;
};