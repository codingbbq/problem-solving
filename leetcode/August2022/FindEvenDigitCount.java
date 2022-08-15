// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/

public class FindEvenDigitCount {
    public static void main(String[] args) {
        int[] nums = { 12,345,2,6,7896 };
        FindEvenDigitCount dc = new FindEvenDigitCount();
        int ans = dc.findNumbers(nums);
        System.out.println(ans);
    }

    public int findNumbers(int[] nums) {
        int found = 0;
        for(int x : nums) {
            if(countEven(x)) {
                found++;
            }
        }
        return found;
    }

    public boolean countEven(int num) {
        int count = 0;
        while(num != 0) {
            num = num / 10;
            count++;
        }
        return count % 2 == 0;
    }
}
