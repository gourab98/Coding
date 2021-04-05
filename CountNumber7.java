import java.util.Scanner;

public class CountNumber7 {
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int test = sc.nextInt();
        int cot=0;
        String line; 
        int i;
        while(test>0){
            
            cot = 0;
           line = sc.nextLine();
        for(i=0 ;i<line.length() ;i++){
         if(line.charAt(i)==' ' && line.charAt(i+1)!=' ')
         {cot++;}
        }
        cot=cot+1;
        System.out.println(cot);
        test--;
        }
    }
}
