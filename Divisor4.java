import java.util.Scanner;

public class Divisor4 {
 
    public static void main(String[] args)
    { 
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        int divisor;
        for(int j=1;j<=testcase;j++)
        {
            divisor = sc.nextInt();
            System.out.print("Case "+j+": ");
            for(int i=1;i<=divisor/2;i++){
                if(divisor%i==0) {
                    System.out.print(i+ " ");
                }
            } 
            System.out.println(divisor);
        }
     }
}
