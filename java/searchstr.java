import java.util.*;
import java.lang.*;
public class searchstr {
    public static void main(String args[])
    {   int i;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the string:");
        String s=sc.next();
        System.out.println("enter character to be searched for:");
        char a=sc.next().charAt(0);
        for(i=0;i<s.length();i++)
        {
            if (s.charAt(i)==a)
            {
                System.out.print("\nFound");
                break;
            }
        }
        if(i!=s.length())
        {
            System.out.print(" Character "+a+" at index "+i);
        }
        else
            System.out.println("Character not found in given String");
    }
}   