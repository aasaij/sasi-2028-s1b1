//program to print N-Bit binary numbers which sum of 1s are should be >= 2
public class Main{
    public static void printBinary(int numBits, String value, int ones){
        //Base case
        if (value.length() == numBits){
            if (ones >= 2)
                System.out.println(value);
            return;
        }
        printBinary(numBits, value+"0", ones);
        printBinary(numBits, value+"1", ones+1);
    }
    public static void main (String[] args) {
        int n = new java.util.Scanner(System.in).nextInt();
        printBinary(n,"", 0);
        // System.out.println("011");
    }
}