#include <iostream> 
#include <string> 
using namespace std; 
class Base { 
public: 
  int f() const {  
    cout << "Base::f()\n";  
    return 1;  
  } 
  void h(int i){
  	cout<<"h z jednym i"<<endl;
  }
  void h(int i, int ii){
  	cout<<"h z dwoma i"<<endl;
  }
  void h(int i, int ii, int iii){
  	cout<<"h z trzema i"<<endl;
  }
  int f(string) const { return 1; } 
  void g() {} 
}; 
class Derived1 : public Base { 
public: 
  void g() const {} 
  void h(int a)
  {
  	cout<<"h z a"<<endl;
  }
}; 
class Derived2 : public Base { 
public: 
  // Redefinition: 
  int f() const {  
    cout << "Derived2::f()\n";  
    return 2; 
  } 
}; 
class Derived3 : public Base { 
public: 
  // Change return type: 
  void f() const { cout << "Derived3::f()\n"; } 
}; 
class Derived4 : public Base { 
public: 
  // Change argument list: 
  int f(int) const {  
    cout << "Derived4::f()\n";  
    return 4;  
  } 
}; 
int main() { 
  string s("hello"); 
    Derived1 d1; 
  int x = d1.f(); 
  d1.f(s); 
  Derived2 d2; 
  x = d2.f(); 
//!  d2.f(s); // string version hidden 
  Derived3 d3; 
//!  x = d3.f(); // return int version hidden 
  Derived4 d4; 
//!  x = d4.f(); // f() version hidden 
  x = d4.f(1); 
  d1.h(1);
  d1.h(1, 1);
  d1.h(1, 1, 1);
} ///:~ 