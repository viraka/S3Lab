import javax.swing.*;
import java.awt.event.*;
public class smn implements ActionListener,MouseListener
{
    JFrame f;
    JButton Submit;
    JTextField n1,n2,n3;
    JLabel m1,m2,m3;

    smn()
    {   
        //making the frame
        f= new JFrame("Assignment 2.2");
        f.setLayout(null);
        f.setSize(500,500);
        f.setVisible(true);

        //making the first entry point
        m1=new JLabel("Enter your number: ");
        n1=new JTextField();
        Submit =new JButton("Submit");
        m1.setBounds(10,50,125,30);
        n1.setBounds(160,50, 200,30);
        Submit.setBounds(160,85,80,25);

        //making the output fields and labels
        m2=new JLabel("Previous Number:");
        n2=new JTextField();
        m3=new JLabel("Next Number:");
        n3=new JTextField();
        m2.setBounds(10,115,125,30);
        n2.setBounds(160,115,200,30);
        m3.setBounds(10, 155, 125, 30);
        n3.setBounds(160, 155, 200, 30);

        //adding actionlistener to button
        Submit.addActionListener(this);

        //add all the elements to the frame
        f.add(m1);
        f.add(n1);
        f.add(Submit);
        f.add(m2);
        f.add(n2);
        f.add(m3);
        f.add(n3);
    }
    public static void main(String[] args)
    {
        new smn();
    }
    public void actionPerformed(ActionEvent e)
    {
        try
        {
            int i= Integer.parseInt(n1.getText());
            n2.setText(Integer.toString(i-1));
            n3.setText(Integer.toString(i+1));
        }
        catch (Exception ef)
        {
            n1.setText("Enter a number here");
        }
        
    }
}
