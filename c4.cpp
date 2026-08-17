#include<iostream>
using namespace std;
// int sum(int a,int b ){
//     return a+b;
// }
// int main (){
//     cout << sum(5,10);
//     return 0;
// }
//----------------------------------------------------------------
// void hello(){
//     cout << "Hello World\n";

// }
// int main (){
//     hello() ; 
//     hello();
// }

//-------------------------------------------------------------------
// void square (int n ){
//     cout << n*n ;

// }
// int main (){
//     square(5);
//     return 0 ;
// }

// ---------------------------------------------------------------------

// void apple (int n ){
//     if (n % 2 == 0){
//         cout << "Even ";
//     }
//     else{
//         cout <<"odd";   
//     }
// }
// int main (){
//     apple(5);
//     return 0 ;
// }
//-----------------------------------------
// void decrement (int a){
//     a = a-1;
//     cout <<a<<endl ;
// }
// int main (){
//     int a = 10;
//     decrement(a);
//     cout<<a<<endl;
// }
//----------------------------------------
float areaOfcirle(int r ){
    return float(3.14*r*r);

}
int main (){
    int r ;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << areaOfcirle(r);
}