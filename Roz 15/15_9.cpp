#include <iostream>
#include <vector>
using namespace std;

class Rodent
{	
  public:
	virtual ~Rodent(){ cout << "~Rodent()"<< endl; }	//musi być virtual żeby wywołał wsystkie destruktory
	virtual void printrodent() const
	{
		cout << "Rodent::printredent" << endl;
	}
	
};


class Hamster : public Rodent
{
  public:
	~Hamster() { cout << "~Hamster()" << endl; }
	void printrodent() const
	{
		cout << "Hamster::printredent" << endl;
	}
};

class BlueHamster : public Hamster
{
  public:
	void printrodent() const
	{
		cout << "BlueHamster::printredent" << endl;
	}
	
};


int main()
{
	Hamster * ham = new Hamster;
	Rodent * h = ham;
	delete h;

	return 0;
}
