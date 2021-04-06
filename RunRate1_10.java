import java.text.DecimalFormat;
import java.util.Scanner;

public class RunRate1_10 {

    private static DecimalFormat df2 = new DecimalFormat("0.00");
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        int test =  sc.nextInt();
        double TotalRun,Run,Ball;
        double CurrentRunrate, RequiresRunrate;
        for(int i=0;i<test;i++)
        {
        TotalRun= sc.nextInt();
        Run = sc.nextInt();
        Ball = sc.nextInt();
        CurrentRunrate = Run/((300-Ball)/6);
        if(Run>TotalRun)
        {
            RequiresRunrate = 0.00;
        }
        else
        {
            RequiresRunrate = (TotalRun-Run+1)/(Ball/6);
        }
        System.out.println(df2.format(CurrentRunrate)+" "+df2.format(RequiresRunrate));

    }
    }
}
