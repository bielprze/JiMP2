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

vector<Rodent*> rod =
{
	new Mouse,	
	new Gerbil,
	new Hamster,
};

int main()
{
	(*rod[0]).printrodent();
	(*rod[1]).printrodent();
	(*rod[2]).printrodent();


	delete rod[0];
	delete rod[1];
	delete rod[2];

	return 0;
}
