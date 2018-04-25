#include <iostream>
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

Rodent * arr[] =
{
	new Mouse,	
	new Gerbil,
	new Hamster,
};

int main()
{
	(*arr[0]).printrodent();
	(*arr[1]).printrodent();
	(*arr[2]).printrodent();

	delete arr[0];
	delete arr[1];
	delete arr[2];

	return 0;

}
