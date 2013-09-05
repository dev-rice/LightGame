#include <cstdlib>

class GridSquare {
	private int x,y;
	private short type;
	private const static int WIDTH = 40;
	private const static int HEIGHT = 30;

	public GridSquare(int x, int y, short type) { this.x = x, this.y =y, this.type = type;}

	public void setType(short type){ this.type = type;}
	public short getType() {return type;}

};