#include<iostream>
using namespace std;

class A{
   
        public:
        void fun1(){
            cout << "This is function 1" << endl;
        }
};
class B : public A{
      public:
        void fun2(){
            cout << "This is function 2" << endl;
        } 
};
class C : public A{
        public:
        void fun3(){
            cout << "This is function 3" << endl;
        }
};

int main(){
     A obj1;
     obj1.fun1();
     B obj2;
     obj2.fun1();
     obj2.fun2();
     C obj3;
     obj3.fun1();
     obj3.fun3();
}