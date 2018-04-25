#include <iostream>

using namespace std;

class Rodent
{	
  public:
	virtual ~Rodent() = 0;	//czysto wirtualny destruktor
	virtual void printrodent() const = 0;
};

Rodent::~Rodent(){ cout << "~Rodent()"<< endl; }

void Rodent::printrodent() const
	{
		cout << "Rodent::printredent" << endl;
	}



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
	~BlueHamster() { cout << "~BlueHamster()" << endl; }
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
