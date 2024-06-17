
int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;

    // Boyer-Moore
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}