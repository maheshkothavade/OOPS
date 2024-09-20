#include<iostream>
using namespace std;
class A{
    public:
    void fun1(){
       cout << "inside fun1" << endl;
    }
};
class B{
    public:
    void fun2(){
       cout << "inside fun2" << endl;
    }
};

class C:public A{
    public:
   void fun3(){
       cout << "inside fun3" << endl;

   } 
};

class D:public B,public C{
   public:
   void fun4(){
      cout << "inside fun4" << endl;
   }

};
int main(){
     D obj;
     obj.fun1();
     obj.fun2();
     obj.fun3();
     obj.fun4();
};