#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    int *result = (int *)malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}

int main(void)
{
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int numsSize1 = sizeof(nums1) / sizeof(int);
    int *returnSize1 = (int *)malloc(2 * sizeof(int));

    printf("Output: ");

    returnSize1 = twoSum(nums1, numsSize1, target1, returnSize1);

    for (int i = 0; i < 2; i++)
    {
        printf("%d ", returnSize1[i]);
    }

    free(returnSize1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int numsSize2 = sizeof(nums2) / sizeof(int);
    int *returnSize2 = (int *)malloc(2 * sizeof(int));

    printf("\nOutput: ");

    returnSize2 = twoSum(nums2, numsSize2, target2, returnSize2);

    for (int i = 0; i < 2; i++)
    {
        printf("%d ", returnSize2[i]);
    }

    free(returnSize2);

    return 0;
}