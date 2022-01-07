// https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
// 914. X of a Kind in a Deck of Cards
// From Solution

public class DeckOfCards {
    public static void main(String[] args) {
        int[] deck = {1,1,2,2,3,3,4};
        DeckOfCards dc = new DeckOfCards();
        boolean ans = dc.hasGroupsSizeX(deck);
        System.out.println(ans);
    }
    public boolean hasGroupsSizeX(int[] deck) {
        int[] count = new int[10000];
        for (int c: deck)
            count[c]++;

        int g = -1;
        for (int i = 0; i < 10000; ++i)
            if (count[i] > 0) {
                if (g == -1)
                    g = count[i];
                else
                    g = gcd(g, count[i]);
            }

        return g >= 2;
    }

    public int gcd(int x, int y) {
        return x == 0 ? y : gcd(y%x, x);
    }
}
