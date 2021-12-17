// https://leetcode.com/problems/maximum-number-of-words-you-can-type/
// 1935. Maximum Number of Words You Can Type

public class MaximumWordsType {

    public static void main(String[] args) {
        String text = "leet code";
        String brokenLetters = "lt";
        MaximumWordsType mwt = new MaximumWordsType();
        int answer = mwt.canBeTypedWords(text, brokenLetters);
        System.out.println(answer);
    }
    public int canBeTypedWords(String text, String brokenLetters) {
        int answer = 0;
        String[] s = text.split(" ", 0);
        char[] broken = brokenLetters.toCharArray();
        for(int i = 0; i < s.length; i++) {
            boolean found = true;
            for(int j = 0; j < broken.length; j++) {
                if(s[i].contains(Character.toString(broken[j]))) {
                    found = false;
                    break;
                }
            }
            if(found) {
                answer++;
            }
        }
        return answer;
    }
}
