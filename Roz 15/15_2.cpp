#include <iostream>
using namespace std;

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


int main()
{
	//Shape ksztalt;	//BLAD nie można tworzyć obiektów klas które mają conajmniej jedną funkcję wirtualną
	Circle kolo;
	Square kwadrat;
	Triangle trojkat;

	kolo.draw();
	kwadrat.draw();
	trojkat.draw();

	return 0;
}



