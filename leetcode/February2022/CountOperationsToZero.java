// https://leetcode.com/problems/count-operations-to-obtain-zero/
// 2169. Count Operations to Obtain Zero

public class CountOperationsToZero {
    public static void main(String[] args) {
        int num1 = 2;
        int num2 = 3;
        CountOperationsToZero cz = new CountOperationsToZero();
        int ans = cz.countOperations(num1, num2);
        System.out.println(ans);
    }
    public int countOperations(int num1, int num2) {
        int steps=0;

        while(num1!=0 && num2!=0){
            if(num1>num2){
                num1=num1-num2;
            }else{
                num2=num2-num1;
            }
            steps++;
        }
        return steps;
    }
}
