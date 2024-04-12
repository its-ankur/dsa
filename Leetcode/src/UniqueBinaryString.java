import java.util.HashSet;
import java.util.Set;

public class UniqueBinaryString {

    public static String findDifferentBinaryString(String[] nums) {
        Set<String> numSet = new HashSet<>();
        for (String num : nums) {
            numSet.add(num);
        }

        int n = nums.length;

        // Initialize an empty string
        StringBuilder result = new StringBuilder();

        // Generate all possible binary strings
        if (!generateBinaryString(numSet, result, n)) {
            return "";  // No unique string found
        }

        return result.toString();
    }

    private static boolean generateBinaryString(Set<String> numSet, StringBuilder result, int n) {
        // Base case: if the result has the same length as n, check if it is unique
        if (result.length() == n) {
            if (!numSet.contains(result.toString())) {
                return true;  // Found a unique string
            }
            return false;  // Not unique, continue generating
        } else {
            // Recursive case: append "0" and "1" and continue generating strings
            result.append("0");
            if (generateBinaryString(numSet, result, n)) {
                return true;  // Found a unique string in recursion
            }
            result.deleteCharAt(result.length() - 1); // Backtrack

            result.append("1");
            if (generateBinaryString(numSet, result, n)) {
                return true;  // Found a unique string in recursion
            }
            result.deleteCharAt(result.length() - 1); // Backtrack

            return false;  // No unique string found in this branch
        }
    }

    public static void main(String[] args) {
        // Test cases
        String[] nums1 = {"01", "10"};
        System.out.println(findDifferentBinaryString(nums1));  // Output: "11" or "00"

        String[] nums2 = {"00", "01"};
        System.out.println(findDifferentBinaryString(nums2));  // Output: "11" or "10"

        String[] nums3 = {"111", "011", "001"};
        System.out.println(findDifferentBinaryString(nums3));  // Output: "101" or any other valid result
    }
}
