#include <iostream>
using namespace std;

class Shape
{
  public:
	virtual void draw() const
	{
		cout << "Shape::draw" << endl;	
	}	
};

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


//rzutowanie w górę podczas inicjalizacji tablicy
Shape * arr[] =
{
	new Circle,	
	new Square,
	new Triangle,
};

int main()
{
	//Circle kolo;
	//kolo.draw();

	(*arr[0]).draw();
	(*arr[1]).draw();
	(*arr[2]).draw();

	return 0;
}



