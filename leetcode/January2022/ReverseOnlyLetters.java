// https://leetcode.com/problems/reverse-only-letters/
// 917. Reverse Only Letters

public class ReverseOnlyLetters {
    public static void main(String[] args) {
        String s = "a-bC-dEf-ghIj";
        ReverseOnlyLetters rl = new ReverseOnlyLetters();
        String ans = rl.reverseOnlyLetters(s);
        System.out.println(ans);
    }
    public String reverseOnlyLetters(String s) {
        char[] sArr = s.toCharArray();
        int start = 0;
        int end = sArr.length - 1;

        while(start <= end) {
            if(!Character.isAlphabetic(sArr[start])) {
                start++;
            } else if(!Character.isAlphabetic(sArr[end])) {
                end--;
            } else {
                char temp = sArr[start];
                sArr[start] = sArr[end];
                sArr[end] = temp;
                start++;
                end--;
            }
        }

        return new String(sArr);
    }
}
