/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    for(let v of nums2){
        nums1[nums1.indexOf(0)] = v
    }
    return nums1.sort((a,b)=>a-b)
};
