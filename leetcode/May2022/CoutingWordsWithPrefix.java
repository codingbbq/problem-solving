// https://leetcode.com/problems/counting-words-with-a-given-prefix/
// 2185. Counting Words With a Given Prefix

public class CoutingWordsWithPrefix {
    public static void main(String[] args) {
        String[] words = {"leetcode","win","loops","success"};
        String pref = "code";

        CoutingWordsWithPrefix cp = new CoutingWordsWithPrefix();
        int ans = cp.prefixCount(words, pref);
        System.out.println(ans);
    }
    public int prefixCount(String[] words, String pref) {
        int count = 0;
        for(String x : words) {
            if(x.indexOf(pref, 0) == 0) {
                count++;
            }
        }
        return count;
    }
}
