//Given an array of integers nums and an integer target, 
//return indices of the two numbers such that they add up to target.
#include <stdlib.h>

// Function to find two sum indices
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int *result = (int *)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    // TESTCASE
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize;

    // Call the twoSum function
    int* result = twoSum(nums, numsSize, target, &returnSize);

    // Print the result
    if (result != NULL) {
        printf("Indices are: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No pair found that sums to %d.\n", target);
    }

    return 0;
}
