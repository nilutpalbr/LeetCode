/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    const hashmap = new Map();
    const output = [];

    for (let i = 0; i < nums.length; i++) {
        const num = nums[i];
        if (hashmap.has(num)) output.push(num);
        hashmap.set(num, i);
    }

    for (let i = 1; i <= nums.length; i++) {
        if (!hashmap.has(i)) {
            output.push(i);
            break;
        }
    } 

    return output;
};