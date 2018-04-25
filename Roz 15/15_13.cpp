//: C15:Early.cpp
// Wczesne łączenie 1 funkcje wirtualne

#include <iostream>
#include <string>
using namespace std;

class Pet 
{
  public:
	virtual string speak() const = 0;
};
	
string Pet::speak() const { return ""; }

class Dog : public Pet 
{
  public:
	string speak() const { return "Hau!"; }
};

int main() 
{
	Dog ralph;
	Pet* pl = &ralph;
	Pet& p2 = ralph;
	//Pet p3;		//nie można utwożyć obiektu klasy abstrakcyjnej
	// Późne łączenie w obu przypadkach:
	cout << "pl->speak() = " << pl->speak() <<endl;
	cout << "p2.speak() - " << p2.speak() << endl;
	// Wczesne łączenie (prawdopodobnie):
	//cout << "p3.speak() - " << p3.speak() << endl;
}
