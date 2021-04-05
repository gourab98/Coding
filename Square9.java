import java.util.Scanner;

public class Square9 {
    public  static void main(String[] args) {
    
    Scanner sc =new Scanner(System.in);    
    int test= sc.nextInt();
    int a;
    double b;
    for(int i=0;i<test;i++)
    {
        int num;
        num=sc.nextInt();
        b = Math.sqrt(num);
        a = (int)Math.sqrt(num);
        if(b==a) System.out.println("YES");
        else System.out.println("NO");

    }
    }    
}
