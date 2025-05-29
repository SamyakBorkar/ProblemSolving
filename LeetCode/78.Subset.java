import java.util.*;

class Solution {
    public void generateSubsets(int[] nums, List<List<Integer>> res, List<Integer> temp, int index) {
        if (index == nums.length) {
            res.add(new ArrayList<>(temp));
            return;
        }
        temp.add(nums[index]);
        generateSubsets(nums, res, temp, index + 1);

        temp.remove(temp.size() - 1);
        generateSubsets(nums, res, temp, index + 1);
    }

    public List<List<Integer>> subsets(int[] nums) {
        int index = 0;
        List<Integer> temp = new ArrayList<>();
        List<List<Integer>> res = new ArrayList<>();
        generateSubsets(nums, res, temp, index);
        return res;
    }

    public static void main(String args[]) {
        int[] arr = {1, 2, 3};
        Solution obj = new Solution();
        List<List<Integer>> res = obj.subsets(arr);
        for (List<Integer> subset : res) {
            System.out.println(subset);
        }
    }
}