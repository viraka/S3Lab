import java.util.*;
import java.lang.*;

class strpal
{
    public static void main(String args[])
    {   
        int i;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the string:");
        String s=sc.next();
        String t="";
        for(i=s.length()-1;i>=0;i--)
        {
            t=t+s.charAt(i);
        }
        if(s.equalsIgnoreCase(t))
            System.out.println("String is a palindrome");
        else
            System.out.println("String is not a palindrome");
    }
}