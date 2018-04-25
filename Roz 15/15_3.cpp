#include <iostream>
using namespace std;

//klasa abstrakcyjna - bo maprzynajmniej jedną funkcję wirtualną
class Shape
{
  public:
	virtual void draw() const = 0;		//funkcja czysto wirtualna; nie może być inline!	
};

void Shape::draw() const				
{
	cout << "Shape::draw" << endl;	
}

class Circle : public Shape
{
  public:
	void draw() const
	{
		cout << "Circle::draw" << endl;	
	}	
};

class Square : public Shape 
{
  public:
	void draw() const
	{
		cout << "Square::draw" << endl;	
	}
};

class Triangle : public Shape 
{
  public:
	void draw() const
	{
		cout << "Triangle::draw" << endl;	
	}
};

void take(Shape & sh)		//funkcje wirtualne uniemożliwiają przekazywanie przez wartość argumentów typów abstrakcyjnych klas take(Shape sh){...} żle!
{
	cout << "take()" << endl;
}


int main()
{
	Circle kolo;
	//Square kwadrat;
	//Triangle trojkat;

	take(kolo);		//rzutowanie w góre z Circle na Shape
	//take(kwadrat);
	//take(trojkat);
	
	return 0;
}



