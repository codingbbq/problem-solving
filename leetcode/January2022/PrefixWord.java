// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

public class PrefixWord {
    public static void main(String[] args) {
        String sentence = "i love eating burger";
        String searchWord = "burg";
        PrefixWord pw = new PrefixWord();
        int ans = pw.isPrefixOfWord(sentence, searchWord);
        System.out.println(ans);
    }
    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] s = sentence.trim().split(" ");
        for(int i = 0; i < s.length; i++) {
            if(s[i].indexOf(searchWord) == 0) {
                return i+1;
            }
        }
        return -1;
    }
}
