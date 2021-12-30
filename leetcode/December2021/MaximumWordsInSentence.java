// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
// 2114. Maximum Number of Words Found in Sentences
public class MaximumWordsInSentence {
    public static void main(String[] args) {
        String[] sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
        MaximumWordsInSentence ms = new MaximumWordsInSentence();
        int ans = ms.mostWordsFound(sentences);
        System.out.println(ans);
    }
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for(String x : sentences) {
            max = Math.max(max, x.split(" ").length);
        }
        return max;
    }
}
