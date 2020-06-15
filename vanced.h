#ifndef _vanced_
#define _vanced_
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

 /// Classes 
   // EXCEPTION CLASS
   /*
class CantAttack : public exception
{
	public :
		const char* what()
		{
			return "Your choice can not be out of the rules ! ";
		}
		void setEntry(int entry)
		{
			this->entry = entry;
		}
		void getEntry()
		{
			cout << "Your selection : " << entry << endl;
		}
	private : 
		int entry;
};
 */
class Opponent;
class Vanced
{
	public :
		Vanced(string Name)
		{
			name = Name;
			power = 10.0;
			hp = 100.0;
			cout << "Gain much Victories in your new Life \" " << name << " \" ! "<< endl;
		}
		Vanced()
		{
			string Name;
			power = 10.0;
			hp = 100.0;
			cout << "GiB a name to your Character !" << endl;
			cout << "> ";
			cin >> Name;
			name = Name;
			cout << "Gain much Victories in your new Life "<< name << " ! " << endl;
		}
		
		friend void fastGame(Vanced& hero);
		friend void adventure(Vanced& hero);
		friend void fighting(Vanced& hero , Opponent& monster);
		friend void stateup(Vanced& hero); // +
		
		void scoreTable();
		int attackMenu();	//	+ includes attacking , escaping and maging
		void attack(int n,double *oppHp); // + this will be into attackMenu
		void killed(Opponent& mons);	// + this will increases level and money when called
		int getLevel(); // +
		void setName(); // +
		int getMoney(); // +
		string getName(); // +
		double getHp(); // + 
		double getPower(); // +
		void levelUp();	// +
		void purchase(int n,string from);	// +
		bool isDied();	// +
		void died();	// +
		double getExp(); // +
		int getScore();
		void showProfile();
		

	protected :
		double hp;			
		double power;
		string name;
		int level = 1;
		int gold;
		bool die = false;
		int score;
		string specAtk[3];
		double exp;			// 2 --> 100	3 --> 300	 4 --> 1000 	5 --> 3000 		6 --> 10.000		 
							// 7 --> 30.000 	8 --> 100.000 	 9 --> 300.000  	10 --> 1.000.000
};
class Opponent
{
	public : 
		Opponent(string x)
		{
			hp = 100;
			power = 30;
			name = x;
		}; 
		Opponent(string x , double healt , double str)
		{
			name = x;
			hp = healt;
			power = str;
		}
		int getLevel();
		string getName();
		double getHp();
		double getPower();
		void harm(double *healt);
	protected : 
		double hp;
		double power;
		string name; 
		int level;
};

class Ez : public Opponent
{
	public :
		Ez(string p) : Opponent(p)
		{
			hp = 100;
			power = 5;
			name = p;
			level = 1;
		};
};
class Begin : public Opponent
{
	public :
		Begin(string p) : Opponent(p)
		{
			hp = 300;
			power = 50;
			name = p;
			level = 2;
		}
};
class Hard : public Opponent
{
	public :
		Hard(string p) : Opponent(p)
		{
			hp = 1000;
			power = 100;
			name = p;
			level = 3;
		}
		void specialAtk();
	private :
		int specAtk = 0;
}; 
class Imp : public Opponent
{
	public :
		Imp(string p) : Opponent(p)
		{
			name = p;
		}
		Imp& operator=(Vanced& obj)
		{
			hp = 2 * obj.getHp();
			power = 2 * obj.getPower();
			level = 4;
			return *this;
		}
};
class MarketPlace
{
	public :
		friend void blackSmith(Vanced& obj);
		friend void magicShop(Vanced& obj);
		friend void weaponShop(Vanced& obj);
		MarketPlace() { cout << "Market Place is opened ! " << endl; };
		MarketPlace(Vanced& obj);
	protected :
		int selection;
};
void Instruction();
void map(Vanced& hero);
void marketInstruction();
void gameMenu(Vanced& hero);
void mapMenu(Vanced& hero);

#endif 
