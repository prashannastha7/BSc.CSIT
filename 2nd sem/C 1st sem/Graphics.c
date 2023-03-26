#include<graphics.h>
#include<conio.h>
int main(){
	initwindow(500, 500); //initwindow means console bahek aarko window banauchaa 500 500 means window width and height
	setcolor(YELLOW);
	//circle(int x, int y,radius)
	//x,y -> centre of circle 200,150
	//radius of circle 120
	circle(200,150,90);	
	//rectangle(int left, int top,int right, int bottom)
	rectangle(400,100,200,200);

	getch(); // defines in conio.h // window hold gareyraa rakhna natraa output aauneyy bitiakii janchaa
	
	return 0;
}
