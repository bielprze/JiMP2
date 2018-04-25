//: C14:Combined.cpp 
// Inheritance & composition 
#include <iostream>
class A { 
  int i; 
public: 
  A(int ii) : i(ii) {} 
  ~A() {} 
  virtual void f() const {} 
}; 

class B { 
  int i; 
public: 
  B(int ii) : i(ii) {}  
  ~B() {} 
  void f() const {} 
};
 
class C : public B, public A { 
  //A a; 
public: 
  C(int ii) : B(ii), A(ii) {} 
  ~C() {} 			// Calls ~A() and ~B() 
  void f() const {  		// Redefinition 
    A::f(); 
    B::f(); 
  } 
};
 
void fun(A & i)
{
  i.f();
}

int main() { 
  C c(47);
  fun(c);	//rzutowanie w górę
} 
