/* leetcode 15: 3Sum

ý tưởng thuật toán:

- sắp xếp mảng nums tăng dần.
- duyệt qua từng phần tử i trong mảng nums, nếu i > 0 và nums[i - 1] == nums[i] thì bỏ qua để tránh trung lặp.
- tạo 2 con trỏ left = i + 1, right = n - 1.
- duyệt qua mảng nums khi left < right thì:
    + tạo biến sum = nums[i] + nums[left] + nums[right].
    + nếu sum < 0 thì tăng left.
    + nếu sum > 0 thì giảm right.
    + nếu sum == 0 thì trả về [nums[i], nums[left], nums[right]].

độ phức tạp:
thời gian: O(n^2)
không gian: O(1) */

import java.util.*;
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList();
        for (int i = 0; i < nums.length - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = nums.length - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    result.add(new ArrayList(Arrays.asList(nums[i], nums[left], nums[right])));
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
}