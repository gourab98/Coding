import java.util.Scanner;

public class Factorial11 {
    public static void main(String[] args){
        
        Scanner sc =new Scanner(System.in);
        int test=sc.nextInt();
        long fac;
        int num;
        for(int j=0;j<test;j++){
            num=sc.nextInt();
            fac=1;
            for(int i=1;i<=num;i++){
                fac=fac*i;
            }
            System.out.println(fac);
        }
    }
}
