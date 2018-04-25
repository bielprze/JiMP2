// Dodawanie funkcji wirtualnych podczas dziedziczenia
// : C15:AddingVirtuals.cpp

#include <iostream>
#include <string>
using namespace std;

class Pet 
{
	string pname;
  public:
	Pet(const string& petName) : pname(petName) {}	//konstruktor nie może być virtualny
	virtual string name() const = 0;
	virtual string speak() const = 0;
};

string Pet::name() const { return pname; }

string Pet::speak() const { return ""; }

class Dog : public Pet 
{
	//string dname;
  public:
	Dog(const string& petName) : Pet(petName) {}
	// Nowa wirtualna funkcja w klasie Dog:
	//virtual string sit() const { return Pet::name() + " siedzi"; }
	string name() const { return Pet::name(); }
	string speak() const { 				// Zasłonięcie
	return name() + " mowi ' H a u ! ' " ; }
};

int main() 
{
	Pet* p[] = { new Dog("zwyczajny"), new Dog("bob")};
	cout << "p[0]->speak() - " << p[0]->speak() << endl;
	cout << "p[1]->speak() = " << p[1]->speak() << endl;
	return 0;
}
