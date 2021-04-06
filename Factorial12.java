import java.util.Scanner;

public class Factorial12 {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int test = sc.nextInt();
        int num, five, fivee,twoo,two,c;
        for(int z=0;z<test;z++){
            num = sc.nextInt();

            fivee=0;
        twoo=0;
        for(int i=2;i<=num;i++)
        {
            c=i;
            five=0;
            two=0;
             for(int j=2;j<=i;)
                {
                    if(c%j==0) {
                        if(j==2) two++;
                        if(j==5) five++;
                        c=c/j;
                    }
                    else j++;
                }
               twoo=two+twoo;
               fivee=fivee+five;
        }
        if(fivee>twoo) System.out.println(twoo);
        else System.out.println(fivee);
        }
    }
}
