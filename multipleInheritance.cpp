#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

        public:
        void bark(){
            cout << "barking" << endl;
        }
};
class Human{
    public:
       string color;
    public:
       void speak(){
           cout << "speaking"<< endl;

       }
};

class Category : public Animal , public Human{

};

int main(){
    Category c;
    c.bark();
    c.speak();
}