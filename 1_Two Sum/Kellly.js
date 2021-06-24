/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const map = new Map();
    
    nums.forEach((num, index) => {
        map.set(num, index);
    })
    
    let result;
    
    nums.forEach((num, index) => {
        const otherNum = target - num;
        const otherIndex = map.get(otherNum);
        if (otherIndex === undefined) return;
        if (index === otherIndex) return;
        
        result = [index, otherIndex]
    })
    
    return result;
//     const map = {};
    
//     nums.forEach((num, index) => {
//         map[num] = index
//     })
    
//     let result;
    
//     nums.forEach((num, index) => {
//         const otherNum = target - num;
//         const otherIndex = map[otherNum];
//         if (otherIndex === undefined) return;
//         if (index === otherIndex) return;
        
        
//         result = [index, otherIndex]
//     })
    
//     return result;
};
