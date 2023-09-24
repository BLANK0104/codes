//a simple password strength checker using c++ algorhythm

#include<iostream>//required
#include<conio.h>//required
#include <windows.h>//console
#include <time.h>//random
#include <string.h>//password

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
//havent changed color yet
COORD CursorPosition;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void drawBorder(int x=0, int y=0){
	char v = 186; // vertical
    char h = 205; // horizontal
    char tr = 187; // top right border
    char br = 188; // bottom right border
    char tl = 201; // top left border
    char bl = 200; // bottom left border
    int width = 30;
    int height = 3;
	//need to adjust coordinates later...allignments needed
	//needs a lot of rework here

//dont mess with below things....
    for( int i=1; i<=height; i++ ){
		for( int j=1; j<=width; j++ ){
	    	gotoxy(j+x,i+y);
	    	if( i==1 && j==1 ) cout<< tl;
			else if( i==height && j==1 ) cout<< bl;
	    	else if( i==1 && j==width ) cout<< tr;
			else if( i==height && j==width ) cout<< br;
			else if( i==1 || i==height ) cout<< h;
			else if( j==1 || j==width ) cout<< v;
		}
	}
}
//upto here
//allignments needed here...not exactly aligned
//not alligning


//driver
int main() {
    srand((unsigned) time(NULL));//rand time fx

	system("cls");//good

 	char password[21];//maybe increase it later?
 	int length;//mannual length

	char op;
	do{
		system("cls");

		cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±"<<endl;
		cout<<endl;
		cout<<"\t\t     ±±±±±± "<<endl;
		cout<<"\t\t     ±        ± "<<endl;
		cout<<"\t\t     ±        ±"<<endl;
		cout<<"\t\t     ±        ±"<<endl;
		cout<<"\t\t  ±±±±±±±±±"<<endl;
		cout<<"\t\t  ±±±±±±±±±"<<endl;
		cout<<"\t\t  ±±±      ±±±"<<endl;
		cout<<"\t\t  ±±±±  ±±±±"<<endl;
		cout<<"\t\t  ±±±±  ±±±±"<<endl;
		cout<<"\t\t  ±±±±±±±±±"<<endl;

		cout<<endl;
		cout<<"             PASSWORD  STRENGTH  CHECKER      "<<endl;
		cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±"<<endl<<endl;

		cout<<endl<<"\n\n\tEnter Password: ";
		cin>> password;

		char pass[21] = "";
		int excess = strlen(password) - 6;//wont do that far but security statement
		int baseScore = 50;

		int numUpper = 0;
		int numSymbol = 0;
		int numLower = 0;
		int numDigit = 0;

		int bonusExcess = 3;
		int bonusUpper = 4;
		int bonusNumbers = 5;
		int bonusSymbols = 5;
		int bonusCombo = 0;
		int bonusFlatLower = 0;
		int bonusFlatNumber = 0;

		int i;//ascii required.............
		for( i=0; i<strlen(password); i++ ){
			if( password[i] >= 48 && password[i] <= 57 ){  // 0-9
				numDigit++;
			}
			if( password[i] >= 97 && password[i] <= 125 ){ // a-z
				numLower++;
			}
			if( password[i] >= 65 && password[i] <= 90 ){ // A-Z
				numUpper++;
			}
			if( password[i] >= 33 && password[i] <= 47 ){ //symbols
				numSymbol++;
			}
		}

		if (numUpper>0 && numDigit>0 && numSymbol>0)
		{
			bonusCombo = 25;
		}

		else if ((numUpper>0 && numDigit>0) || (numUpper>0 && numSymbol>0) || (numDigit>0 && numSymbol>0))
		{
			bonusCombo = 15;
		}
//main score calulator...
		int score = baseScore + (excess*bonusExcess) + (numUpper*bonusUpper) +
				(numDigit*bonusNumbers) + (numSymbol*bonusSymbols) +
				bonusCombo + bonusFlatLower + bonusFlatNumber;
//coordinates needs changing...
		gotoxy(8,14);
		cout<<"\n\n              Checking Password Strength...\n\n";
		gotoxy(8,15);
		for(int i=0; i<27; i++){
			cout<<"         "<<(char)176;//spacing faulted
			Sleep(100);//actions required
			//system("cls");//remove later
			//delete clearscreen command
		}

		drawBorder(7,17);//changes required

//password status
		gotoxy(10,19);//changes required
		if (score<50)
		{
			cout<<"Password Status: Weak";
		}
		else if (score>=50 && score<75)
		{
			cout<<"Password Status: Average";
		}
		else if (score>=75 && score<100)
		{
			cout<<"Password Status: Strong";
		}
		else if (score>=100)
		{
			cout<<"Password Status: Secure";
		}

		gotoxy(5,23); cout<<"Do you want to generate password again (y/n): ";
		op = getch();
	}while(op=='y' || op=='Y');

    return 0;
}
//code working and is successful....there are bugs and dont know how to fix them...
//maybe leave them as they are?
//in strength dont know why but thers an "n"...........unable to fix
//coordinates needs further fixing...
//allignements required
//x,y needs to be realligned
//terminal needs allignment (+xc,+y+xc)
//password logic on symbols needs to be rethought
//reallign spacing  on cursor blinker