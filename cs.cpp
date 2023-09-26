#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numsSize = 4;
    int nums[6] = {2,7,11,15};
    int target = 9;
    for (int i = 1; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d%d", j, i);
            }
        }
    }
	return 0;
}