
import javax.swing.JFrame;

public class GameFrame extends JFrame
{
	GamePanel gameP_1= new GamePanel();

	GameFrame()
	{
		this.add(gameP_1);
		this.setTitle("game");
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(false);
		this.pack();
		this.setVisible(true);
		this.setLocationRelativeTo(null);
	}
}
