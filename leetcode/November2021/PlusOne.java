// https://leetcode.com/problems/plus-one/

import java.util.Arrays;

public class PlusOne {

    public static void main(String[] args) {
        int[] digits = {9,9};
        PlusOne po = new PlusOne();
        int[] plus = po.plusOne(digits);
        System.out.println(Arrays.toString(plus));
    }

    public int[] plusOne(int[] digits) {
        int i = digits.length - 1; // last element of the array
        int carry = 0;

        // Check for the last element
        if(digits[i] + 1 == 10) {
            carry = 1;
            digits[i] = 0;
            i--;

            while(i>=0){
                if(digits[i]+carry == 10) {
                    carry = 1;
                    digits[i] = 0;
                } else {
                    digits[i] = digits[i]+carry;
                    carry = 0;
                }
                i--;
            }

            // Now if the carry is 1, then we need to prepend it to the array.
            if(carry == 1) {
                int[] newArray = new int[digits.length + 1];
                newArray[0] = 1;
                for(int j = 0; j < digits.length; j++) {
                    newArray[j+1] = digits[j];
                }

                return newArray;
            }

            return digits;

        } else {
            // Just update last element as there is no need of carry.
            digits[i] = digits[i] + 1;
        }


        return digits;
    }

}
