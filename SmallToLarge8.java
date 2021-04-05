import java.util.Scanner;

public class SmallToLarge8 {
        public static void main(String[] args){
                Scanner sc = new Scanner(System.in);
                int test = sc.nextInt();
                int a,b,c,ma,mid,mi;
                for(int i=1;i<=test;i++)
                {
                    a = sc.nextInt();
                    b = sc.nextInt();
                    c = sc.nextInt();

                    ma=(a<b)?b:a;
                    ma=(ma<c)?c:ma;
                    mi=(a<b)?a:b;
                    mi=(mi<c)?mi:c;
                    if(a!=ma && a!=mi) mid=a;
                    else if(b!=ma && b!=mi) mid=b;
                    else  mid=c;
            
                    System.out.println("Case "+i+": "+mi+" "+mid+" "+ma);
                }

        }    
}
