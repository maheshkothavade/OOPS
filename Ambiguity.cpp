#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout << "A function" << endl;
    }
};
class B{
    public:
    void fun(){
        cout << "B function" << endl;
    }
};
class C:public A,public B{
  
};
int main(){
    C obj;
    obj.A :: fun();
    obj.B :: fun();
}

