#include "vanced.h"
int 
main()
{
	int selection;
	char yes;
	int broken = 0;
	string name;
	string line;
	string sorry = "I think that's not a number ?";
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
	while ( !broken )
	{
		cout	<< "\n\n\t\t\tWelcome to Vanced Saga ! "
		<< "\n\t\t\tInstruction (1)"
		<< "\n\t\t\tStart Adventure (2)"
		<< "\n\t\t\tFast Match (3)"
		<< "\n\t\t\tExit (4)" << endl;
		do
		{
			try
			{
				cout << "\t\t\t> ";
				cin >> selection;
				if( selection == 1 )
				{
					cout << "\n\n\n"<< endl;
					Instruction(); /*
					system("pause");
					cin.clear();
					cin.ignore(100,'\n'); */
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
					broken = 1;
				}
				else if (!cin)
				{
					throw sorry;
				}
				else if (selection <1 || selection > 4)
				{
					throw selection;
				}
			}
			catch(string s)
			{
				cout << s << endl;
				cin.clear();
				cin.ignore(100,'\n');
			}
			catch(int selection)
			{
				cout << "You are not able to choose " << selection << endl;
				cin.clear();
				cin.ignore(100,'\n');
			}
		}
		while( selection != 1 && selection != 2 && selection != 3 && selection != 4 );
	}
	return 0;
}
