//a simple password strength checker using c++ algorhythm

#include<iostream>//required
#include<conio.h>//required
#include <string.h>//password

using namespace std;

//driver
int main() {

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

		cout<<"\n\n              Checking Password Strength...\n\n";
		for(int i=0; i<27; i++){
			cout<<"         "<<(char)176;//spacing faulted
			//system("cls");//remove later
			//delete clearscreen command
		}


//password status
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

	     cout<<"\n      Do you want to generate password again (y/n): ";
		op = getch();
	}while(op=='y' || op=='Y');

    return 0;
}