#include<iostream>
using namespace std;
 
class A{
    public:
    int a,b;

    public:
    void operator +(A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output" << value2 - value1 << endl;

    }
};
int main(){
    A obj1,obj2;
    obj1.a=7;
    obj2.a=4;

    obj1+obj2;
}