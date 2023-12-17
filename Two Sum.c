/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (target==(nums[i]+nums[j])) {
                int* answer = (int*)malloc(sizeof(int)*2);
                answer[0]=i;
                answer[1]=j;
                returnSize[0] = 2;
                return answer;
            }
        }
    }
    return 0;
}
