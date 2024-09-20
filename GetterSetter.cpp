#include<iostream>
using namespace std;
class Hero{
    private:
    int health;

    
    public:
    char level;
     Hero(){                                 // constructor 
         cout << "Constructor called";
     }

    Hero(int health){                   // Parametrized constructor
         this->health = health;
         cout << "Hlo" << endl;

    }
     Hero(int health,char level){
        this->health = health;
        this->level = level;
     }

    Hero(Hero& temp){
       cout << "copy constructor called" << endl;
       this->health = temp.health;
       this->level = temp.level;
    }
   
    int getHealth(){
        return health;
    }
   
    int getLevel(){
        return level;
    }

    void setHealth(int h1){
        health = h1;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    //  Hero mahesh(10);
    //  cout << "Address of mahesh " << &mahesh;
     Hero S(12,'A');                                            // Copy constructor is called
     
     Hero R(S);

    //  cout << "Mahesh health is" << mahesh.getHealth() << endl;
    //  mahesh.setHealth(70);
    //  cout << "mahesh health after set " << mahesh.getHealth();

}