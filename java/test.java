import javax.swing.*;
import java.awt.event.*;

class test implements ActionListener
{	
	JFrame j= new JFrame();
	JButton y= new JButton("Yes");
	JButton n= new JButton("No");
	JButton q= new JButton("QUIT");
	JLabel l= new JLabel("HELLO");
	test()
	{
		y.setBounds(10, 100, 100, 100);
		n.setBounds(270, 100, 100, 100);
		q.setBounds(281,400,70,30);
		l.setBounds(170,200,100,30);
		j.add(y);
		j.add(n);
		j.add(l);
		j.add(q);
		y.addActionListener(this);
		n.addActionListener(this);
		q.addActionListener(this);
		j.setSize(400, 500);
		j.setLayout(null);
		j.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e){
		if(e.getSource()==y)
			l.setText(y.getText());
		else if(e.getSource()==n)
			l.setText(n.getText());
		else if(e.getSource()==q)
			System.exit(0);
	}
	public static void main(String[] args){
		new test();
	}
}
