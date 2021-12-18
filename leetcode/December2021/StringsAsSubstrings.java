// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
// 1967. Number of Strings That Appear as Substrings in Word
public class StringsAsSubstrings {
    public static void main(String[] args) {
        String[] patterns = {"a","abc","bc","d"};
        String word = "abc";
        StringsAsSubstrings ss = new StringsAsSubstrings();
        int answer = ss.numOfStrings(patterns, word);
        System.out.println(answer);
    }
    public int numOfStrings(String[] patterns, String word) {
        int answer = 0;
        for(int i = 0; i < patterns.length; i++) {
            if(word.contains(patterns[i])) {
                answer++;
            }
        }
        return answer;
    }
}
