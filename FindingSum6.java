import java.util.Scanner;

public class FindingSum6 {
  
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int number;
        int first;
        int last;
        int testcase = sc.nextInt();
        for(int i=1;i<=testcase;i++){
            number = sc.nextInt();
            
            last = number % 10;
            number= number / 10000;
            first = number % 10;
            int sum = first+last;
            System.out.println("Sum = "+sum); 
        }

         
    }
}
