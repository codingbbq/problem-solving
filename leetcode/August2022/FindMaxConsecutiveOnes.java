public class FindMaxConsecutiveOnes {
    public static void main(String args[]) {
        int[] nums = { 1,1,0,1,1,1 };
        FindMaxConsecutiveOnes co = new FindMaxConsecutiveOnes();
        int ans = co.findMaxConsecutiveOnes(nums);
        System.out.println(ans);
    }
    public int findMaxConsecutiveOnes(int[] nums) {
        int c = 0;
        int max = 0;
        for(int x : nums) {
           if(x == 1) {
               c++;
               max = Math.max(max, c);
           } else {
               c = 0;
           }
        }
        return max;
    }

}
