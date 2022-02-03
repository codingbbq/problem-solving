// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
// 1013. Partition Array Into Three Parts With Equal Sum

public class PartitionArrayIntoThreeParts {
    public static void main(String[] args) {
        int[] arr = {0,2,1,-6,6,-7,9,1,2,0,1};
        PartitionArrayIntoThreeParts pt = new PartitionArrayIntoThreeParts();
        boolean ans = pt.canThreePartsEqualSum(arr);
        System.out.println(ans);
    }
    public boolean canThreePartsEqualSum(int[] arr) {
        // Find the target i.e sum / 3
        // create a counter for parts and if counter == 2, return true
        int total = 0;
        for(int i = 0; i < arr.length; i++) {
            total += arr[i];
        }
        if(total % 3 != 0) return false;
        int target = total / 3;

        int accum = 0, counter = 0;
        for(int i = 0; i < arr.length; i++) {
            if(counter == 2) return true;
            accum += arr[i];
            if(accum == target) {
                counter++;
                accum = 0;
            }
        }
        return false;
    }
}
