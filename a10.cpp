#include <iostream>
using namespace std;
// class Calculator{
//     public:
//     int add(int a, int b){
//         return a+b;
//     }
//     int sub(int a, int b){
//         return a-b;
//     }
//     int mul(int a, int b){
//         return a*b;
//     }
//     float div(float a, float b){
//         return a/b;
//     }dir

// };
// int main (){
//     Calculator c1;
//     cout<<"Addition: "<<c1.add(10,5)<<endl;
//     cout<<"Subtraction: "<<c1.sub(10,5)<<endl;
//     cout<<"Multiplication: "<<c1.mul(10,5)<<endl;
//     cout<<"Division: "<<c1.div(10,5)<<endl;
// }
  

// -----------------------------------------------------------

class Calculator {
public:
    void add(int a, int b) {
        cout << "Addition: " << a + b << endl;
    }
    void sub(int a, int b) {
        cout << "Subtraction: " << a - b << endl;
    }
    void mul(int a, int b) {
        cout << "Multiplication: " << a * b << endl;
    }
    void div(float a, float b) {
        cout << "Division: " << a / b << endl;
    }
 void display(int a, int b) {
        add(a, b);
        sub(a, b);
        mul(a, b);
        div(a, b);
    }
};
int main (){
    
    Calculator c1;
    c1.display(10, 5); 
    return 0;
}