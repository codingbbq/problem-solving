// https://leetcode.com/problems/reverse-prefix-of-word/
// 2000. Reverse Prefix of Word

public class ReversePrefixOfString {
    public static void main(String[] args) {
        String word = "abcdefd";
        char ch = 'd';
        ReversePrefixOfString rs = new ReversePrefixOfString();
        String ans = rs.reversePrefix(word, ch);
        System.out.println(ans);
    }
    public String reversePrefix(String word, char ch) {
        char[] wordArr = word.toCharArray();
        int found = 0;
        for(int i = 0; i < wordArr.length; i++) {
            if(wordArr[i] == ch) {
                found = i;
                break;
            }
        }
        for(int i = 0; i <= found/2; i++) {
            char temp = wordArr[i];
            wordArr[i] = wordArr[found - i];
            wordArr[found-i] = temp;
        }
        return new String(wordArr);
    }
}
