import java.util.*;
import java.lang.*;

public class charfreqstr 
{
    public static void main(String args[])
    {
        int i,c=0;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the string:");
        String s=sc.next();
        System.out.println("enter character whose frequency is to be found");
        char a=sc.next().charAt(0);
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i)==a)
                c++;
        }
        System.out.println("The character "+a+" occurs "+c+" times in "+s);
    }
}