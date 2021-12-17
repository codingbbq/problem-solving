import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class loops {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferReader.readLine().trim());

        for(int i = 1; i <= 10; i++) {
            System.out.println(N + " x " + i + " = " + (N*i));
        }

        bufferReader.close();
    }
}
