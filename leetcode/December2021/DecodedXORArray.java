// https://leetcode.com/problems/decode-xored-array/
// 1720. Decode XORed Array

import java.util.Arrays;

public class DecodedXORArray {
    public static void main(String[] args) {
        int[] encoded = {1,2,3};
        int first = 1;
        DecodedXORArray dxa = new DecodedXORArray();
        int[] decoded = dxa.decode(encoded, first);
        System.out.println(Arrays.toString(decoded));
    }
    public int[] decode(int[] encoded, int first) {
        int n = encoded.length;
        int[] a = new int[n+1];
        a[0] = first;

        for(int i = 0; i < n; i++) {
            a[i+1] = a[i] ^ encoded[i];
        }

        return a;
    }
}
