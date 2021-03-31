import java.util.Scanner;

public class BoxProblem5 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        int box;
        while(test>=1){
            box = sc.nextInt();
            for(int i=1;i<=box;i++){
               for(int j=1;j<=box;j++){
                   System.out.print("*");
               } 
               System.out.println();
            }
            if(test>1) System.out.println();
        test--;
        }
    }
}
