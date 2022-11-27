import java.util.*;
import java.lang.*;

public class replacestr 
{
    public static void main(String args[])
    {
        int i;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the string:");
        String s=sc.next();
        System.out.println("enter character to be replaced :");
        char a=sc.next().charAt(0);
        System.out.println("enter character to replace with:");
        char b=sc.next().charAt(0);
        s=s.replace(a,b);
        System.out.println("The new String is : "+s);
    }
}
