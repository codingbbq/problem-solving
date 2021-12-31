// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
// 1385. Find the Distance Value Between Two Arrays
public class FindDistanceValueBetweenArray {
    public static void main(String[] args) {
        int[] arr1 = {4,5,8};
        int[] arr2 = {10,9,1,8};
        int d = 2;
        FindDistanceValueBetweenArray fd = new FindDistanceValueBetweenArray();
        int ans = fd.findTheDistanceValue(arr1, arr2, d);
        System.out.println(ans);
    }
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int count = 0;

        for(int i = 0; i < arr1.length; i++){

            boolean flag = false;

            for(int j = 0; j < arr2.length; j++){
                if(Math.abs(arr1[i] - arr2[j]) <= d){
                    flag = true;
                    break;
                }
            }

            if(!flag){
                count++;
            }

        }
        return count;
    }
}
