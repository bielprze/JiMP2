//: C15:VirtualsInDestructors.cpp 
// Virtual calls inside destructors 
#include <iostream> 
using namespace std; 
class Base { 
public: 
  virtual ~Base() {  
    cout << "Base1()\n";  
    f();  
  } 
  virtual void f() { cout << "Base::f()\n"; } 
}; 
class Derived : public Base { 
public: 
  ~Derived() { cout << "~Derived()\n"; } 
  void f() { cout << "Derived::f()\n"; } 
}; 

class C : public Derived {
public:
	void f() { cout<< "klasa C"<<endl;}
	~C(){cout << "~C()\n";	}
};
int main() { 

  Derived *d = new C;
  delete d;
} ///:~ 
