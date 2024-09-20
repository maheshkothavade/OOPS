#include <iostream>
using namespace std;
class Example {
    //char a;   // 1 byte
    //int b;    // 4 bytes
    // char a;   // 1 byte
    // char c;   // 1 byte
    //int b;    // 4 bytes
    char c;
    char b;
   int aa;
};

int main() {
    cout << "Size of class Example: " << sizeof(Example) << endl;
    Example *h = new Example;           // dynamically object is created
    

}