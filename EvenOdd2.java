import java.util.Scanner;

public class EvenOdd2 {
 
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

//        char[] character = input.next().toCharArray();
        int testcase = sc.nextInt();
        
        for(int i=0;i<testcase;i++){
            String str = sc.next();
            char last = str.charAt(str.length()-1);
            int number = last;
            if(number%2==0) System.out.println("even");
            else System.out.println("odd");
        }
        
        
    }
}
