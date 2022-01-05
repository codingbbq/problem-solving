// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
// 1880. Check if Word Equals Summation of Two Words

public class CheckWordSummation {
    public static void main(String[] args) {
        String firstWord = "acb";
        String secondWord = "cba";
        String targetWord = "cdb";

        CheckWordSummation cs = new CheckWordSummation();
        boolean ans = cs.isSumEqual(firstWord, secondWord, targetWord);
        System.out.println(ans);

    }
    public static int getNumber(String word) {
        int F = word.length();
        // Get the number equivalent
        int n = 0;
        for(int i = 0; i < F; i++) {
            n += ((word.charAt(i) - 97) * Math.pow(10, F-i-1));
        }
        return n;
    }
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {

        int f = getNumber(firstWord);
        int s = getNumber(secondWord);
        int t = getNumber(targetWord);
        if(f+s==t) {
            return true;
        }
        return false;
    }
}
