// https://leetcode.com/problems/detect-capital/
// 520. Detect Capital
public class DetectCapital {
    public static void main(String[] args) {
        String word = "g";
        DetectCapital dc = new DetectCapital();
        boolean ans = dc.detectCapitalUse(word);
        System.out.println(ans);
    }
    public boolean detectCapitalUse(String word) {
        if(word.length() == 1) return true;

        if(word.equals(word.toLowerCase())) {
            return true;
        } else if(word.equals(word.toUpperCase())) {
            return true;
        } else {
            String temp = word.substring(0,1).toUpperCase() + word.substring(1).toLowerCase();
            if(word.equals(temp)) {
                return true;
            }
        }
        return false;
    }
}
