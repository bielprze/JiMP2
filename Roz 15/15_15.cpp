#include <iostream>

using namespace std;

class A
{
public:
  A() { fn(); }

  virtual void fn() { _n = 1; cout<<_n<<endl;}
  int getn() { return _n; }

protected:
  int _n;
};

class B : public A
{
public:
  B() : A() {}

  virtual void fn() { _n = 2; cout<<_n<<endl;}
};
int main(void){
  B b;
  int n = b.getn();
	return 0;
}
