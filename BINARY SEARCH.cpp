#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int size, target;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target number to search: ");
    scanf("%d", &target);
    int result = binarySearch(nums, 0, size - 1, target);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}

