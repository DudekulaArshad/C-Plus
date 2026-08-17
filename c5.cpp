// #include<iostream>
// using namespace std;
// int main (){
//     for(int i = 0 ; i <  10 ; i++){
//         cout <<i<<endl;

//     }


// }

//-----------------------------------------------

// #include<iostream>
// #include<numeric>
// using namespace std;
// int main (){
// int a , b;
// cout <<"Enter first number : " ;
// cin >> a; 
// cout <<"Enter second number : " ;
// cin >> b; 
// cout << "GCD :"<< gcd(a,b)<< endl ;
// }


#include<iostream>
#include<numeric>
using namespace std;
int main (){
    int num1, num2;
    cin >>num1>>num2;
    int gcd = 1 ;
    for(int i = 1; i<=min(num1,num2); i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
        cout<<"GCD of : "<<num1<<" and "<<num2<<" is : "<<gcd<<endl;

    }

}



