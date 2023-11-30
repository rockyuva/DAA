#include <stdio.h>

int binarySearch(int nums[], int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int nums[100]; // Assuming a maximum array size of 100, you can adjust this based on your requirements
    int numsSize;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    // Get array elements from the user
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < numsSize; ++i) {
        scanf("%d", &nums[i]);
    }

    int target;

    // Get target from user input
    printf("Enter the target number: ");
    scanf("%d", &target);

    int result = binarySearch(nums, target, 0, numsSize - 1);

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}

