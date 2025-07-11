// Last updated: 7/2/2025, 5:42:59 PM
#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  
        } else if (nums[mid] < target) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }

    return -1;  
}

