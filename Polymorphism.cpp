#include<iostream>
using namespace std;

class A{

   public:
   void sayHello(){
      cout << "Hello"<< endl;
   }

   void sayHello(string name){
    cout << "Hii" << endl;
   }

};
int main(){
   A obj;
   obj.sayHello();
}