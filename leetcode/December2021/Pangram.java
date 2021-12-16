// https://leetcode.com/problems/check-if-the-sentence-is-pangram/
// 1832. Check if the Sentence Is Pangram

public class Pangram {
    public static void main(String[] args) {
        String sentence = "leetcode";
        Pangram p = new Pangram();
        boolean a = p.checkIfPangram(sentence);
        System.out.print(a);
    }

    public boolean checkIfPangram(String sentence) {
        for(int i = 97; i < (97+26); i++) {
            char check = (char)(i);
            if(!sentence.contains(Character.toString(check))) {
                return false;
            }
        }
        return true;
    }
}
