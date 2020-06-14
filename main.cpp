#include "vanced.h"
int 
main()
{
	int selection;
	char yes;
	string name;
	string line;
	Ez ez("Frozen Monster");
	ifstream opening;
	opening.open("data/opening.txt");
	if( opening.is_open())
	{
		while ( getline(opening,line) )
		{
			cout << line << endl;
		}
	}
	opening.close();
	
	///// GAME START 
	while ( true )
	{
		cout	<< "\n\n\t\t\tWelcome to Vanced Saga ! "
		<< "\n\t\t\tInstruction (1)"
		<< "\n\t\t\tStart Adventure (2)"
		<< "\n\t\t\tFast Match (3)"
		<< "\n\t\t\tExit (4)" << endl;
		do
		{
			cout << "\t\t\t> ";
			cin >> selection;
			if (!(selection > 0 && selection < 5))
			{
				cout << "Wrong selection ! Try again ..." << endl;
			}
		}while( !(selection > 0 && selection < 5));
		if( selection == 1 )
		{
			cout << "\n\n\n"<< endl;
			Instruction();
		}
		else if ( selection == 2 )
		{
			system("cls");
			cout << "What is your name warrior ?" << "\n> ";
			cin >> name;
			Vanced hero(name);
			cout << "You are so sleepy and fall asleep for long time ...";
			system("cls");
			adventure(hero);
			fighting(hero,ez);
			cout << "So whats next ?" << endl;
			while(!hero.isDied())
			{
				gameMenu(hero);
			}
			cout << "Want to see Score Table ? (y/n)" << endl;
			cin >> yes;
			if ( toupper(yes) == 'Y' )
			{
				hero.scoreTable();
			}
			else 
			{
				cout << "Okay , see ya " << endl;
			}
			break;				///// GAME ENDS
		}
		else if ( selection == 3)
		{
			cout << "Coming Soon ..." << endl;
		}
		else if (selection == 4 )
		{
			cout << "\t\t\tSee ya warrior "<<endl;
			break;
		}
	}
	return 0;
}
