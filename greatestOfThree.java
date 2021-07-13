import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        
        Scanner input = new Scanner(System.in);
        
        String num = input.nextLine();
        
        int max = Integer.parseInt(num.substring(0,3));
        
        for(int i=3;i<num.length()-2;i++){
            int temp = Integer.parseInt(""+num.charAt(i)+num.charAt(i+1)+num.charAt(i+2));
            if(temp>max){
                max = temp;
            }
            
        }
        System.out.println(max);
    }
}