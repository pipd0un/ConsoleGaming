#include "vanced.h"
//// Declarations 

void Vanced::setName()
{
	string newName;
	cout << "Tell your new name to Coiffeur " << "\n> ";
	cin >> newName;
	name = newName; 
}
double Vanced::getHp()
{
	return hp;
}
int Vanced::getLevel()
{
	return level;
}
double Vanced::getPower()
{
	return power;
}
string Vanced::getName()
{
	return name;
}
int Vanced::getMoney()
{
	return gold;
}
void Vanced::purchase(int n,string from)
{
	if(from == "blacksmith")
	{
		switch(n)
		{
			case 1 : 
			{
				if( gold >= 100)
				{
					gold -= 100;
					cout << "You bought \" Leather Shield \" " << "\n Remaining Balance : " << gold << endl;
					hp+=50.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 2 : {
				if( gold >= 200)
				{
					gold -= 200;
					cout << "You bought \" Iron Shield \" " << "\nRemaining Balance : " << gold << endl;
					hp+=100.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 3 : {
				if( gold >= 300)
				{
					gold -= 300;
					cout << "You bought \" Chitin Shell \" " << "\n Remaining Balance : " << gold << endl;
					hp+=150.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 4 : {
					if( gold >= 1000)
				{
					gold -= 1000;
					cout << "You bought \" Platin Shield \" " << "\n Remaining Balance : " << gold << endl;
					hp+=250.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 5 : {
				if( gold >= 10000)
				{
					gold -= 10000;
					cout << "You bought \"Diamond Shield \" " << "\n Remaining Balance : " << gold << endl;
					hp+=600;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 6 : {
				if( gold >= 50000)
				{
					gold -= 50000;
					cout << "You bought \" Dragon Shield \" " << "\n Remaining Balance : " << gold << endl;
					hp+=5000.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 7 : {
				if( gold >= 200000)
				{
					gold -= 200000;
					cout << "You bought \" Mortal's Shield \" " << "\n Remaining Balance : " << gold << endl;
					hp+=15000;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 8 : {
				if( gold >= 1000000)
				{
					gold -= 1000000;
					cout << "You bought \" Pip Doun's Crown \" " << "\n Remaining Balance : " << gold << endl;
					hp+=100000;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			
		}
	}
	else if ( from == "magicshop")
	{
		switch(n)
		{
			case 1 : 
			{
				if( gold >= 100)
				{
					gold -= 100;
					cout << "You bought \" Burning Stuff \" " << "\n Remaining Balance : " << gold << endl;
					specAtk[0] = "Burning Stuff";
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 2 : {
				if( gold >= 600)
				{
					gold -= 600;
					cout << "You bought \" Ice Ball \" " << "\nRemaining Balance : " << gold << endl;
					specAtk[1] = "Ice Ball";
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 3 : {
				if( gold >= 300)
				{
					gold -= 300;
					cout << "You bought \" Chitin Shell \" " << "\n Remaining Balance : " << gold << endl;
					specAtk[2] = "Chitin Shell";
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 4 : {
					if( gold >= 2000)
				{
					gold -= 2000;
					cout << "You bought \" Venom Teeth \" " << "\n Remaining Balance : " << gold << endl;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
		}
	}
	else if ( from == "weaponshop")
	{
		switch(n)
		{
			case 1 : 
			{
				if( gold >= 100)
				{
					gold -= 100;
					cout << "You bought \" Dud Knives \" " << "\n Remaining Balance : " << gold << endl;
					power+=25.0;
				}
				cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 2 : {
				if( gold >= 500)
				{
					gold -= 500;
					cout << "You bought \" Hunter's Sword \" " << "\nRemaining Balance : " << gold << endl;
					power+=50.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 3 : {
				if( gold >= 3000)
				{
					gold -= 3000;
					cout << "You bought \" Avenger's Daggers \" " << "\n Remaining Balance : " << gold << endl;
					power+=150.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
			case 4 : {
					if( gold >= 1000000)
				{
					gold -= 1000000;
					cout << "You bought \" Pip Doun's Scythe \" " << "\n Remaining Balance : " << gold << endl;
					power+=1203.0;
				}cout << "You do not have enough gold ! " << endl;
				break;
			}
		}
		
	}
}
void Vanced::levelUp()
{
	hp+=hp/11;
	power+=power/10;
}
bool Vanced::isDied()
{
	return die;
}
void Vanced::died()
{
	cout << "\n\nYou have been died ..." << endl;
	die = true;
}
void stateup(Vanced& hero)
{
	if( hero.getLevel() < 2 && hero.getExp() >= 100)
	{
		hero.levelUp();
	}
	else if ( hero.getLevel() < 3 && hero.getExp() >= 300)
	{
		hero.levelUp();
	}
	else if ( hero.getLevel() < 4 && hero.getExp() >= 1000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 5 && hero.getExp() >= 3000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 6 && hero.getExp() >= 10000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 7 && hero.getExp() >= 30000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 8 && hero.getExp() >= 100000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 9 && hero.getExp() >= 300000)
	{
		hero.levelUp();
	} 
	else if ( hero.getLevel() < 10 && hero.getExp() >= 1000000)
	{
		hero.levelUp();
	} 
}
double Vanced::getExp()
{
	return exp;
}
void Vanced::showProfile()
{
	cout	<< "\nProfile : "
			<< "\n " << name << "'s Money : " << gold
			<< "\n " << name << "'s Level : " << level
			<< "\n " << name << "'s Exp : " << exp
			<< "\n " << name << "'s score : " << score
			<< "\n " << name << "'s POWER : " << power
			<< "\n " << name << "'s HP : " << hp << endl;
}
int Vanced::attackMenu()
{
	int selection;
	int entry;
	string sorry = "Sorry , I don't think that's a number ?";
	cout << " Attack (1)" << "\n Escape (2)";		//"\nSpecial Attack (3)" << 
	for(int j=0;j<3;j++)
	{
		if( !specAtk[j].empty() )					// It shows special attacks if purchased
		{
			cout << "\n " << specAtk[j] << " (" << j+3 << ")";
		}
	}
	while( selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5 )
	{
		try
		{
			cout << "\n> ";
			cin >> entry;
			if ( entry < 3 && entry > 0 )
			{
				selection = entry;
			}
			else if ( entry > 2 && specAtk[entry-3].empty() != true)
			{
				selection = entry;
			}
			else if (!cin)
			{
				throw sorry;
			}
		}
		catch(string s)
		{
			cout << s << endl;
			cin.clear();
			cin.ignore(100,'\n');
		}
	}
	return selection;
}
void Vanced::attack(int n,double *oppHp)
{
	if ( n == 1)
	{
		*oppHp -= power;
	}
	else if ( n == 2)
	{
		cout << "You chose to save your life ! " << endl;
	}
	else if ( n == 3)
	{
		*oppHp -= (50);
	}
	else if ( n == 4)
	{
		*oppHp -= (300 + power);
	}
	else if ( n == 5)
	{
		*oppHp -= (1500 + power);
	}
}
void Vanced::killed(Opponent& mons)
{
	if ( mons.getLevel() >= score)
	{
		score = mons.getLevel();
	};
	if ( mons.getLevel() == 1)
	{
		exp += 80.5;
		gold += 100;
	}
	else if ( mons.getLevel() == 2)
	{
		exp += 855.7;
		gold += 1463.8;
	}
	else if ( mons.getLevel() == 3)
	{
		exp += 6842.35;
		gold += 24385.4;
	}
	else if ( mons.getLevel() == 4)
	{
		exp += 44367.66;
		gold += 777444.55;
	}cout << "\n\nYou gain something here :) \n\n\n" << endl;
	system("pause");
}
int Vanced::getScore()
{
	return score;
}
void Vanced::scoreTable()
{
	system("cls");
	cout << "\n\n\n\t\t*******************************";
	cout << "\n\n\n\t\tHey you Brave warrior , " << name << " !";
	cout << "\n\n\n\t\tYour last Heal Point  , " << hp   ;
	cout << "\n\n\n\t\tYour last Power Point , " << power;
	cout << "\n\n\n\t\tYour gaining before you die " << gold ;
	cout << "\n\n\n\t\tYour experience before dying " << exp ;
	cout << "\n\n\n\t\tYou reached [" << score << "] level before you die !" ;
	cout << "\n\n\n\t\t*******************************" << endl;
}
int Opponent::getLevel()
{
	return level;
}
double Opponent::getPower()
{
	return power;
}
string Opponent::getName()
{
	return name;
}
double Opponent::getHp()
{
	return hp;
}
void Opponent::harm(double *healt)
{
	*healt = *healt - power;
}
void blackSmith(Vanced& obj)
{
	string sorry = "There's no choice like" ;
	int selection;
	cout << "Leather shield  -- 100 G (1)" << "\nIron Shield  -- 200 G (2)" << "\nChitin Shell  -- 300 G (3)" 
		 << "\nPlatin Shield  -- 1000 G (4)"<< "\nDiamond Shield -- 10k G (5)"<< "\nDragon Shield  -- 50k G (6)"
		 << "\nMortal's Shield  -- 200k G (7)"<< "\nLegendary Shield  -- 1M G (8)"<< "\nEscape from shop ... (0)" << endl;
	cout << "\nIn your wallet : " << obj.getMoney() << endl;
	cout << "\nChoose what to do ";
	try
	{
		cout << "> ";
		cin >> selection;
		if(selection != 0)
		{
			obj.purchase(selection,"blacksmith");
		}
		else if ( selection == 0)
		{
			cout << "You decided to buy nothing here ..." << endl;
		}
		else 
		{
			throw sorry + to_string(selection);
		}
	}
	catch(string s)
	{
		cout << s << endl;
	}

}
void weaponShop(Vanced& obj)
{
	int selection;
	cout << "Dud Knives  -- 100 G (1)" << "\nHunter's Sword  -- 500 G (2)" << "\nAvenger's Dagger  -- 3000 G (3)" 
		 << "\nPip Doun's Scythe  -- 1M G (4)"<< "\nEscape from shop ... (0)" << endl;
	cout << "\nIn your wallet : " << obj.getMoney() << endl;
	cout << "\nChoose what to do ";
	cout << "> ";
	cin >> selection;
	if(selection != 0)
	{
		obj.purchase(selection,"weaponshop");
	}
	else 
	{
		cout << "You decided to buy nothing here ..." << endl;
	}
}
void magicShop(Vanced& obj)
{
	int selection;
	cout << "Burning stuff  -- 100 G (1)" << "\nIce ball  -- 600 G (2)" << "\nVenom teeth  -- 2000 G (3)" 
		 <<"\nEscape from shop ... (0)" << endl;
	cout << "\nIn your wallet : " << obj.getMoney() << endl;
	cout << "\nChoose what to do ";
	cout << "> ";
	cin >> selection;
	if(selection != 0)
	{
		obj.purchase(selection,"magicshop");
	}
	else 
	{
		cout << "You decided to buy nothing here ..." << endl;
	}
}
void marketInstruction()
{
	cout	<< "	*********Armors********	" << "\n -> Leather Shield (increases life to 50 damage) "
			<< "\n -> Iron Shield (increases life to 100 damage) " << "\n -> Chitin Shell (increases life to 150 damage) "
			<< "\n -> Platin Shield (increases life to 250 damage) " << "\n -> Diamond Shield (increases life to 600 damage) "
			<< "\n -> Dragon Shield (increases life to 5000 damage) "<< "\n -> Mortal's Shield (increases life to 15000 damage) "
			<< "\n -> Pip Doun's Crown (increases life to 100.000 damage)" << endl;
			
	cout	<< "\n	*********WitchCrafts********	" << "\n -> Burning Stuff (Damages to enemy about 50 hit point) "
			<< "\n -> Ice Ball (Damages to enemy about 300 hit point) " << "\n -> Venom Teeth (Damages to enemy about 1500 hit point) " << endl;
			
	cout	<< "\n	*********Weapons********	" << "\n -> Dud knives (increases Power about 25 point) "
			<< "\n -> Hunter's Sword (increases Power about 50 point) " << "\n -> Avenger's Daggers (increases Power about 150 point) "
			<< "\n -> Pip Doun's Scythe (increases Power about 1203 point) " << endl;
}
MarketPlace::MarketPlace(Vanced& obj)
{
	string sorry = "I think that's not a choice ...";
	cout << "Hello " << obj.getName() << "\nWhere you want to travel ? " << endl;
	cout << "Blacksmith (1) " << "\nWeapon Shop (2) " << "\nMagic Shop (3)" << endl;
	int selection ;
	char items;
	bool done = false;
	cout << "> ";
	cin >> selection ;
	cout << "Want to see items insturction ? (y/n)" << endl;
	cout << "> ";
	cin >> items;
	if( toupper(items) == 'Y')
	{
		marketInstruction();
		system("pause");
		system("cls");
	}
	else if ( toupper(items) == 'N'){
	}
	else 
	{
		cout << "Wrong selection !" << endl;
	};
	while( !done )
	{
		try
		{
			if ( selection == 1)
			{
				blackSmith(obj);
				done = true;
			}
			else if ( selection == 2)
			{
				weaponShop(obj);
				done = true;
			}
			else if ( selection == 2)
			{
				magicShop(obj);
				done = true;
			}
			else if (!cin)
			{
				throw sorry;
				cout << "Selection = " << selection << endl;
			}
		}
		catch(string entry)
		{
		cout << entry << endl;
		cin.clear(); 
		cin.ignore(100, '\n'); 
		}
	}
}
void fastGame(Vanced& hero)
{
	
}
void mapMenu(Vanced& hero)
{
			cout << "Frozen Monster (EASY) " << "\t\t\t\t\tUNKNOWN  ???" 
			 << "\n\n\nUNKNOWN  ???" << "\t\t\t\t\tUNKNOWN   ???" << endl;
	if ( hero.getScore() >= 2 )
	{
		cout << "Frozen Monster (EASY) " << "\t\t\t\t\tFire Lord (NORMAL)" 
			 << "\n\n\nUNKNOWN  ???" << "\t\t\t\t\tUNKNOWN   ???" << endl;
	}
	else if ( hero.getScore() >= 3 )
	{
		cout << "Frozen Monster (EASY) " << "\t\t\t\t\tFire Lord (NORMAL)" 
			 << "\n\n\nSoul of Mortal (HARD)" << "\t\t\t\t\tUNKNOWN   ???" << endl;
	}
	else if ( hero.getScore() >= 4 )
	{
		cout << "Frozen Monster (EASY) " << "\t\t\t\t\tFire Lord (NORMAL)" 
		 	 << "\n\n\nSoul of Mortal (HARD)" << "\t\t\t\t\tPip Doun  (MIRAGE)" << endl;
	};
	cout << "\n\n\n\nEscape (0)" << "\nSick Frozen Monster (1)" << "\nSick UNKNOWN (2)" << endl;
	if ( hero.getScore() >= 2 )
	{
		cout << "\n\n\n\nEscape (0)" << "\nSick Frozen Monster (1)" << "\nSick Fire Lord (2)" << "\nUNKNOWN (3)" << endl;
	}
	else if ( hero.getScore() >=3 )
	{
		cout << "\n\n\n\nEscape (0)" << "\nSick Frozen Monster (1)" << "\nSick Fire Lord (2)" << "\nSick Soul of Mortal (3)" << "\nSick UNKNOWN (4)"  << endl;
	}
	else if ( hero.getScore() >=4 )
	{
		cout << "\n\n\n\nEscape (0)" << "\nSick Frozen Monster (1)" << "\nSick Fire Lord (2)" << "\nSick Soul of Mortal (3)" << "\nSick Pip Doun (4)"  << endl;
	}
}
void map(Vanced& hero)
{
	Ez ez("Frozen Monster");
	Begin begin("Fire Lord");
	Hard harder("Soul of Mortal");
	Imp impos("PipDoun");
	impos = hero;
	int sel;
	mapMenu(hero);
	hero.getScore();
	cout << "> ";
	cin >> sel;

	if ( hero.getScore() == 1)
	{
		if ( sel == 1)
		{
			fighting(hero,ez);
		}
		else if ( sel == 2)
		{
			fighting(hero,begin);
		}
		else if ( sel == 0 )
		{
			cout << "You escaped from Hunting area ..." << endl;
		}
		else { cout << "Your level is not enough !" << endl;
		}
	}
	else if ( hero.getScore() == 2 )
	{
		if ( sel == 1)
		{
			fighting(hero,ez);
		}
		else if ( sel == 2)
		{
			fighting(hero,begin);
		}
		else if ( sel == 3)
		{
			fighting(hero,harder);
		}
		else if ( sel == 0 )
		{
			cout << "You escaped from Hunting area ..." << endl;
		}
		else { cout << "Your level is not enough !" << endl;
		} 
	}
	else if ( hero.getScore() >= 3 )
	{
		if ( sel == 1)
		{
			fighting(hero,ez);
		}
		else if ( sel == 2)
		{
			fighting(hero,begin);
		}
		else if ( sel == 3)
		{
			fighting(hero,harder);
		}
		else if ( sel == 4 )
		{
			fighting(hero,impos);
		}
		else if ( sel == 0 )
		{
			cout << "You escaped from Hunting area ..." << endl;
		}
		else { cout << "Your level is not enough !" << endl;
		} 
	};
}
void gameMenu(Vanced& hero)
{
	system("cls");
	int sel;
	string sorry = "Sorry , I don't think that's a number ?";
	cout << "\n\n\n\t\t\tGo to Market Place (1)" << "\n\t\t\tGo to Hunting (2)" << "\n\t\t\tSuicide (3)" << "\n\t\t\tLook on your bag (4)" ;
	try
	{
		cout << "\n> ";
		cin >> sel;
		if (sel == 1)
		{
			system("cls");
			MarketPlace market(hero);
			system("pause");
		}
		else if (sel == 2)
		{
			system("cls");
			cout <<" \n\n" << endl;
			map(hero);
		}
		else if (sel == 3)
		{
			cout << " You killed yourself" << endl;
			hero.died();
		}
		else if (sel == 4)
		{
			system("cls");
			string reader;
			ifstream sack;
			sack.open("data/sack.txt");
			if (sack.is_open())
			{
				while ( getline ( sack, reader ))
				{
					cout << reader << endl;
				}
			}
			hero.showProfile();
			system("pause");	
		}
		else if (!cin)
		{
			throw sorry;
			cout << "Number = " << sel << endl; 
		}
		else if (sel < 1 || sel > 4)
		{
			throw "There's no choice like " + to_string(sel);
		}
	}
	catch(string s)
	{
		cout << s << endl;
		cin.clear();
		cin.ignore(100,'\n');
		system("pause");
	}
}
void Instruction()
{
	cout	<< "\t\t ###########\t INSTRUCTION\t###########"
		 	<< "\n\t\t First you have to go shopping or hunting area !"
		 	<< "\n\t\t You can GAIN golds from monsters within SLAYING them "
		 	<< "\n\t\t There is no SAVE selection in the game "
		 	<< "\n\t\t But you can ESCAPE from FIGHTING "
		 	<< "\n\t\t If you DIE once , the game will END ! "
		 	<< "\n\n"
		 	<< "\n\t\t The items you bought from shop will be AUTOMATICALLY weared"
		 	<< "\n\t\t You can level up with JUST slaying HARDER monsters "
		 	<< "\n\t\t You can start using SPECIAL ATK feature after buying something from magic shop"
		 	<< "\n\n\t\t\t GOOD LUCK" << endl;
}
void adventure(Vanced& hero)
{
	//Ez ez("Yam - Yam");
	cout << "You opened your eyes in a cold place " << "\n Asking weird questions to yourself " 
		 << "\n All is nonsense " << "\n so What is next ?" <<endl;
	system("pause");
	cout << "Wooooaaaaargh " << endl;
	system("pause");
	cout << "Huh ?" << "\n"
		 << "What was that ?" << "\n I'll eat ya ! " << endl;
	system("pause");
	cout << "A white fury giant has attacked to you " << "\n Take your guard !" << endl;
	//fighting(hero,ez);
}
void fighting(Vanced& hero , Opponent& monster)
{
	string line;
	double hp1 = (hero.getHp());
	double hp2 = (monster.getHp());
	ifstream warrior;
	while( true )
	{
		system("cls");
		cout<<"***                               ***"<<endl;
		cout<<"***                               ***"<<endl;
		cout<<"***                               ***"<<endl;
		cout<<"***                               ***"<<endl;
		cout<<" *                                 * "<<endl;
		cout<<"*************************************"<<endl;
		cout<<"******     FIGHTING STARTED    ******"<<endl;
		cout<<"*************************************"<<endl;
		warrior.open("data/warrior.txt");
		if( warrior.is_open())
		{
			while ( getline(warrior,line) )
			{
				cout << line << endl;
			}
		}
		warrior.close();
		monster.harm(&hp1);  // Opponent attacks you 
		if(hp1 <= 0)
		{
			hp1 = 0;
		}
		cout<<monster.getName()<<"'s HP : " << hp2 << endl;
		cout<<monster.getName()<<" hit to "<<hero.getName()<<" "
			<<monster.getPower()<<" Points , "<<hero.getName()<<"'s HP = "<<hp1<<endl;
		if(hp1 <= 0)
		{
			hero.died();
		}
		hero.attack(hero.attackMenu(),&hp2);		// you attack to opponent
		if( hp2 <= 0)
		{
			hp2 = 0;
			cout<<"\n"<<monster.getName()<<"'s HP : " << hp2 << endl 
			<< "It's dead " << endl;
			hero.killed(monster);
			stateup(hero);
			break;
		}
		if ( hero.attackMenu() == 1 && hp2 > 0)
		{
			cout<< hero.getName() << " hit to " << monster.getName() << " " 
				<< hero.getPower() << " Points , " << monster.getName() << "'s HP = " <<hp2<<endl;
 		}
		else if( hero.attackMenu() == 2 && hp2 > 0)
		{
			cout << "Escaped ..." << endl;
			break;
		}
		else if ( hero.attackMenu() == 3 && hp2 > 0)
		{
			cout<< hero.getName() << " hit to " << monster.getName() << " " 
				<< "50 Points , " << " Points , " << monster.getName() << "'s HP = " <<hp2<<endl;
		}
		else if ( hero.attackMenu() == 4 && hp2 > 0)
		{
			cout<< hero.getName() << " hit to " << monster.getName() << " " 
				<< "300 Points , " << " Points , " << monster.getName() << "'s HP = " <<hp2<<endl;
		}
		else if ( hero.attackMenu() == 5 && hp2 > 0)
		{
			cout<< hero.getName() << " hit to " << monster.getName() << " " 
				<< "1500 Points , " << " Points , " << monster.getName() << "'s HP = " <<hp2<<endl;
		}
	}
};
