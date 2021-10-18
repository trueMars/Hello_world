

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = calloc(2,sizeof(int));
    for ( int i = 0;i<numsSize-1;i++ ) {
        int key = target - nums[i];
        for ( int j = i+1;j<numsSize;j++ ) {
            if ( nums[j] == key ) {
                ret[0] = i;
                ret[1] = j;
                break;
            }
        }
    }
    *returnSize = 2;
    return ret;
}
