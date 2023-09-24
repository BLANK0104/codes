/* 
a simple snake game using OOP in C++
*/

#include <iostream>//cin, cout......(input output stream)
#include <conio.h>//clrscr, getch, kbhit (for final test case), textcolor (snake and fruit, textbackground (yes)
#include <windows.h>//annoying color again
//#include <dos.h>//getting time of movemnt (one tick)
//"<dos.h>" is obsolete; consider using <direct.h> instead.
//#include <direct.h>
//<direct.h> not working.............
//#include <time.h>//setting time of movement (seed generations)
//libraries found and are working fine...no more inclusions...test passed here......
/*
#include<bits/stdc++.h>
dont know why, but bits library wont work...having issues with almost every fx...must find and use every library separately...
*/
#define MAXSNAKESIZE 100//limits of snake
#define MAXFRAMEX 119//limits of screen in x axis
//cosider changing later in final phase
#define MAXFRAMEY 29//limits of screen in y axis
//consider changing in final phase
//total ticks on screen = 119x29
/*
limits test passed working fine...might not change them 
*/

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){//assigning axis co ordinates...
	CursorPosition.X = x;//x
	CursorPosition.Y = y;//y
	SetConsoleCursorPosition(console, CursorPosition);//fx not working....why???????????????????????????????????????????????????????????
}

void setcursor(bool visible, DWORD size) //instructions = set bool visible = 0 - invisible, bool visible = 1 - visible (dont change if possible)
{
	if(size == 0)//dont mess with this.....seriously....
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width (dont change if possible)
	}
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}//cursor tools finalized..............

class Point{
	private://not working... fix relations....
		int x;
		int y;
	public:
		Point(){
			x = y = 10;
		}
		Point(int x, int y){//"this" trial completed and it works better while referring....maybe finalization?
			this -> x = x;
			this -> y = y;
		}
		void SetPoint(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		int GetX(){
			return x;
		}
		int GetY(){
			return y;
		}
		void MoveUp(){
			y--;
			if( y < 0 )
				y = MAXFRAMEY;
				//cout<<"up="<<y;//remove in final phase
		}
		void MoveDown(){
			y++;
			if( y > MAXFRAMEY )
				y = 0;
				//cout<<"down="<<y;//remove in final phase
		}
		void MoveLeft(){
			x--;
			if( x < 0 )
				x = MAXFRAMEX;
				//cout<<"left="<<x;//remove in final phase
		}
		void MoveRight(){
			x++;
			if( x > MAXFRAMEX )
				x = 0;
				//cout<<"right="<<x;//remove in final phase
		}//cout movement statements are for test only...remove them later...
		//movemwnt test passed..............
		void Draw(char ch='◙'){//change O to change shape of snake or char for everything
			//cout<<"O";
			gotoxy(x,y);
			cout<<ch;
		}//main code to define movement of snake....test completed and successful......bug while ending game or on game over....otherwise no problem in movement
		void Erase(){//deleting previous position
			gotoxy(x,y);
			cout<<" ";
		}
		void CopyPos(Point * p){//taking up forward position
			p->x = x;
			p->y = y;
		}
		int IsEqual(Point * p){//making equal
			if( p->x == x && p->y ==y )
				return 1;
			return 0;
		}
		void Debug(){//moving snake
			cout<<"("<<x<<","<<y<<") ";
		}
};

class Snake{
	private:
		Point * cell[MAXSNAKESIZE]; // array of points to represent snake
		int size; // current size of snake
		char dir; // current direction of snake
		Point fruit;
		int state; // bool representing state of snake i.e. living, dead
		int started;
		int blink; // fruit blink
	public:
		Snake(){
			size = 1; // default size
			cell[0] = new Point(20,20); // 20,20 is default position for spawn at start 
			for( int i=1; i<MAXSNAKESIZE; i++){
				cell[i] = NULL;
			}
			fruit.SetPoint(rand()%MAXFRAMEX, rand()%MAXFRAMEY);//works
			state = 0;
			started = 0;
		}
		void AddCell(int x, int y){
			cell[size++] = new Point(x,y);
		}//disabling reverse movement
		void TurnUp(){
			if( dir!='s' )
			dir = 'w'; // w is control key for turning upward
		}
		void TurnDown(){
			if( dir!='w' )
			dir = 's'; // w is control key for turning downward
		}
		void TurnLeft(){
			if( dir!='d' )
			dir = 'a'; // w is control key for turning left
		}
		void TurnRight(){
			if( dir!='a' )
			dir = 'd'; // w is control key for turning right
		}
		void WelcomeScreen(){
			SetConsoleTextAttribute(console,15);//change number for color of 1st screen
			cout<<"\n                                    /^\\/^\\                                             ";//no graphics but ....maybe classic works as well
			cout<<"\n                                  _|_C|  O|                                              ";//make sure to make the face more better
			cout<<"\n                          \\/     /~     \\_/ \\                                          ";
			cout<<"\n                           \\____|__________/  \\                                         ";
			cout<<"\n                                  \\_______      \\                                \      ";
			cout<<"\n                                          `\\     \\               \\                     ";
			cout<<"\n                                            |     |                  \\                   ";
			cout<<"\n                                           /      /                    \\                 ";
			cout<<"\n                                          /     /                       \\\\              ";
			cout<<"\n                                        /      /                         \\ \\            ";
			cout<<"\n                                       /     /                            \\  \\          ";
			cout<<"\n                                     /     /             _----_            \\   \\        ";
			cout<<"\n                                    /     /           _-~      ~-_         |   |          ";
			cout<<"\n                                   (      (        _-~    _--_    ~-_     _/   |          ";
			cout<<"\n                                    \\      ~-____-~    _-~    ~-_    ~-_-~    /          ";
			cout<<"\n                                      ~-_           _-~          ~-_       _-~            ";
			cout<<"\n                                         ~--______-~                ~-___-~               ";
			cout<<"\n\n                                                 --SNAKE GAME--                         ";//intro after here....made by stuff and all that
		}
		void Move(){
			// Clear screen and start game
			system("cls");

			if( state == 0 ){
				if( !started ){
					WelcomeScreen();
					cout<<"\n\n                                             Press any key to start            ";//alignment done....looks good
					cout<<"\n\n                                            (Made by - Utsav Chandra)          ";//will include others later
					getch();
					started = 1;
					state = 1;
				}else{
					cout<<"\n                             Game Over                  ";//alignment successful
					cout<<"\n                             Score = "<<size             ;//alignment issue....will use setw later to fox it
 					cout<<"\n                Press any key to reply or (alt+F4) to exit       ";//alignment successful
					getch();
					state = 1;
					size = 1;
				}
			}//trials and tests completed...........................................................................(till here...driver code is left)

			// making snake body follow its head
			for(int i=size-1; i>0; i--){
				cell[i-1]->CopyPos(cell[i]);
			}

			// turning snake's head
			switch(dir){
				case 'w':
					cell[0]->MoveUp();
					break;
				case 's':
					cell[0]->MoveDown();
					break;
				case 'a':
					cell[0]->MoveLeft();
					break;
				case 'd':
					cell[0]->MoveRight();
					break;
			}

			if( SelfCollision() )//death command.....
				state = 0;
				//add wall collision fx here (if worked)

			// Collision with fruit
			if( fruit.GetX() == cell[0]->GetX() && fruit.GetY() == cell[0]->GetY()){
				AddCell(0,0);
				fruit.SetPoint(rand()%MAXFRAMEX, rand()%MAXFRAMEY);//random spawn point of fruit is giving predictable results
			}

			//drawing snake
			for(int i=0; i<size; i++)
				cell[i]->Draw();

			SetConsoleTextAttribute(console,75);//fruit color
			if( !blink )
				fruit.Draw('*');//change * to change fruit
			blink = !blink;
			SetConsoleTextAttribute(console,250);//main game screen background color....white(250) for now
			//needs work here

			//Debug();

			Sleep(100);//delay
		}
		int SelfCollision(){
			for(int i=1; i<size; i++)
				if( cell[0]->IsEqual(cell[i]) )
					return 1;
			return 0;
		}
		void Debug(){
			for( int i=0; i<size; i++){
				cell[i]->Debug();
			}
		}
};
//main code to give values everywhere

int main(){
	//random seed generation
	setcursor(0,0);
	//srand( (unsigned)time(NULL));//randomized start point 

	// Test case passed/.......................................
	Snake snake;
	char op = 'l';
	do{
		if(kbhit()){//passed here(keyboard press genereation)
			op = getch();//get ascii
		}//using specific alphabets for movement (w,s,a,d,W,S,A,D)
		switch(op){
			case 'w':
			case 'W':
				snake.TurnUp();//up movement
				break;

			case 's':
			case 'S':
				snake.TurnDown();//down movement
				break;

			case 'a':
			case 'A':
				snake.TurnLeft();//left movement
				break;

			case 'd':
			case 'D':
				snake.TurnRight();//right movement
				break;
		}
		snake.Move();
	}while(op != 'e');//game ending statement

	cin.get();

	return 0;
}
//works with many bugs and issues...but it works....need more tweaking almost everywhere........

/*
kbhit trials successful(dont know how but successful)
buttons work fine
3 out of 7 runs acceptable(start,mid,end,movement of snake,fruit randomizer,physics)
bugs with movement
if movement keys + others are pressed, program crashes......(cnt find fix yet)
holding keys results in no movement
almost fixed movements....at least it works for now
add wall collision instead of wall teleportation?
needs some visual improvement in main game (2nd)
unsigned time null generation successful
*/