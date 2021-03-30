import java.util.Scanner;

public  class EvenOdd1{

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int testcase = input.nextInt();
        for(int i=0;i<testcase;i++)
    {

        int number = input.nextInt();
 
        if(number%2==0) System.out.println("even");
        else System.out.println("odd");

    }
        
    }
}