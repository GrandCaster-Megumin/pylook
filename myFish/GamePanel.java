import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.image.BufferedImage;
import java.io.File;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JPanel;
import javax.swing.Timer;
import javax.swing.plaf.metal.MetalIconFactory;





public class GamePanel extends JPanel  implements ActionListener
{

	static final int SCREEN_WIDTH=800;
	static final int SCREEN_HEIGHT=1000;
	static final int UNIT_SIZE = 100;
	static final int DELAY = 1;

	public long fps_time = System.currentTimeMillis();
	public int fps_cout =0;
	public int map[][] = new int[10][8];
	public boolean isdown=false;
	public boolean isch=false;
	public int type =0;
	GamePanel()
	{
		this.setPreferredSize(new Dimension(SCREEN_WIDTH,SCREEN_HEIGHT));
		this.setBackground(Color.black);
		this.setFocusable(true);
		this.addKeyListener(new MykeyAdapter());

		map[0][0]=1;
		map[0][1]=1;
		map[0][2]=1;
		map[1][1]=1;	
	}

	public void paintComponent(Graphics g)
	{		
		try {
			Thread.sleep(1000/60);//暫停一段時間現在60fps
		}catch(InterruptedException ex) {}
		fps_cout++;//用於計算fps
		//System.currentTimeMillis=取得目前電腦時間
		if(System.currentTimeMillis()-fps_time>=1000){//System.currentTimeMillis=取得目前電腦時間
			System.out.println(fps_cout);
			fps_cout=0;
			fps_time=System.currentTimeMillis();
		}
		drawAuxiliary_line(g);//這只是畫輔助線
		DataUpdata();
		mapDraw(g);//渲染;
		for(int k=0;k<SCREEN_WIDTH/UNIT_SIZE-1;k++)
				{
					if(map[SCREEN_HEIGHT/UNIT_SIZE-1][k]==1)
					{
						isdown=true;
					}
					//isdown=true;
				}
		repaint();//在畫一次
	}
	public long 放快下降時間 = System.currentTimeMillis();
	public void DataUpdata(){
		if(System.currentTimeMillis()-放快下降時間>=1000){
			放快下降時間=System.currentTimeMillis();
			for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
				for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){//for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
					if(map[j][i]==1&&isdown==false){
						map[j][i]=0;
						if(map[j+1][i]==1)
						{
							if(map[j+2][i]==1)
							{
								map[j+3][i]=1;
							}
							else{
								map[j+2][i]=1;
							}
						}
						else{
							map[j+1][i]=1;
						}
						break;
					}
				}
			}
		}
	}
	public void mapDraw(Graphics g){
		g.setColor(Color.white);
		g.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
		for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++)
		{
			for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE;j++)
			{
				if(map[j][i]==1){
					g.setColor(Color.black);
					g.fillRect(i*UNIT_SIZE, j*UNIT_SIZE, UNIT_SIZE, UNIT_SIZE);
				}
			}
		}
	}

	public void drawAuxiliary_line(Graphics g)
	{

		for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++)
		{
			g.drawLine(i*UNIT_SIZE,0,i*UNIT_SIZE,SCREEN_HEIGHT);
		}
		for(int i=0;i<SCREEN_HEIGHT/UNIT_SIZE;i++)
		{
			g.drawLine(0,i*UNIT_SIZE,SCREEN_WIDTH,i*UNIT_SIZE);
		}
	}
	





	
	
	public class MykeyAdapter extends KeyAdapter
	{
		public void keyPressed(KeyEvent e)
		{
			if (e.getKeyCode() == KeyEvent.VK_DOWN) {
				System.out.println(e);
			} else if (e.getKeyCode() == KeyEvent.VK_UP) {
				if(type==0)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j+2][i+1]=1;
								map[j][i+2]=0;
								map[j+1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==1)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j+1][i+1]=0;
								map[j+2][i-1]=1;
								map[j+2][i+1]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==2)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j][i+1]=0;
								map[j-2][i+2]=1;
								map[j-1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i+1]=0;
								map[j+1][i+1]=0;
								map[j-1][i]=1;
								map[j-1][i-1]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				type=(type+1)%4;
				System.out.println("type="+type);
			} else if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
				if(type==0)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j][i+3]=1;
								map[j+1][i+1]=0;
								map[j+1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==1)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j+1][i]=0;
								map[j+2][i]=0;
								map[j][i+1]=1;
								map[j+2][i+1]=1;
								map[j+1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==2)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j][i+3]=1;
								map[j-1][i+1]=0;
								map[j-1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j-1][i+1]=0;
								map[j+1][i+1]=0;
								map[j-1][i+2]=1;
								map[j][i+2]=1;
								map[j+1][i+2]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
			} else if (e.getKeyCode() == KeyEvent.VK_LEFT) {
				if(type==0)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i+2]=0;
								map[j][i-1]=1;
								map[j+1][i+1]=0;
								map[j+1][i]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==1)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i]=0;
								map[j+2][i]=0;
								map[j+1][i+1]=0;
								map[j][i-1]=1;
								map[j+1][i-1]=1;
								map[j+2][i-1]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else if(type==2)
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j][i+2]=0;
								map[j][i-1]=1;
								map[j-1][i+1]=0;
								map[j-1][i]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
				else
				{
					for(int i=0;i<SCREEN_WIDTH/UNIT_SIZE;i++){
						for(int j=0;j<SCREEN_HEIGHT/UNIT_SIZE-1;j++){
							if(map[j][i]==1&&isch==false)
							{
								map[j-1][i+1]=0;
								map[j][i+1]=0;
								map[j+1][i+1]=0;
								map[j][i-1]=1;
								map[j-1][i]=1;
								map[j+1][i]=1;
								isch=true;
								break;
							}
						}
					}
					isch=false;
				}
			}else
			{
				System.out.println('e');
			}

		}

		    
		public void keyReleased(KeyEvent e) 
		{	


		}
	}

	@Override
	public void actionPerformed(ActionEvent e) 
	{
		// TODO Auto-generated method stub	
		
	}



}
