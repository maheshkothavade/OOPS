#include<iostream>
using namespace std;

class Hero{
        public:
        int health;            // In case of empty class , 1 byte is assigned as size
        private:
        int health1;
        public:
        int health2;
    
        
};
int main(){
     Hero h1;

     h1.health = 23;
     //h1.health2 = 13;
     h1.health = 12;
     cout << "size: " << sizeof(h1) << endl;
     cout << "size " << h1.health << endl;
     cout << "size " << h1.health2;            // garbage value

     
}