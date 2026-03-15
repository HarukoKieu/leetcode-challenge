/* leetcode 75: Sort Colors */

class Solution {
    public void sortColors(int[] nums) {
        int left = 0, right = nums.length - 1, i = 0;
        while (i <= right) {
            if (nums[i] == 0) {
                nums[left] = 0;
                left++;
                i++;
            } else if (nums[i] == 2) {
                nums[right] = 2;
                right--;
            } else {
                i++;
            }
        }
    }
}