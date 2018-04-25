#include <iostream>
#include <vector>
using namespace std;

class Rodent
{	
  public:
	virtual void printrodent() const
	{
		cout << "Rodent::printredent" << endl;
	}
	
};

class Mouse : public Rodent
{
  public:
	void printrodent() const
	{
		cout << "Mouse::printredent" << endl;
	}
};

class Gerbil : public Rodent
{
  public:
	void printrodent() const
	{
		cout << "Gerbil::printredent" << endl;
	}
};

class Hamster : public Rodent
{
  public:
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

vector<Rodent*> rod =
{
	new Mouse,	
	new Gerbil,
	new Hamster,
	new BlueHamster,
};

int main()
{
	(*rod[0]).printrodent();
	(*rod[1]).printrodent();
	(*rod[2]).printrodent();
	(*rod[3]).printrodent();


	delete rod[0];
	delete rod[1];
	delete rod[2];
	delete rod[3];

	return 0;
}
