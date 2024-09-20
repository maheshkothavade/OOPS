#include<iostream>
using namespace std;

class Human{

   public:
       int height;
       int weight=2;
       int age;
    public:
       int getAge(){
         return this->age;
       }
       int getWeight(int w){
         return this->weight = w;
       }
};

class Male : public Human{
    public:
         string color;
         void sleep(){
            cout << "male sleeping";
         }
};

int main(){
    Male obj;
    cout << obj.height << endl;
    cout << obj.weight << endl;
    cout << obj.age << endl;
    cout << obj.color << endl;
    obj.sleep();

    
    
    
}

