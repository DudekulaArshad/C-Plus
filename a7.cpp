// #include<iostream>
// using namespace std;
// int  main ()
// {
//     int n = 5;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=n ;j++){
//             cout <<j<<" ";
//         }
//         cout << endl;
//     }
// }

//----------------------------------------------------------

// #include<iostream>
// using namespace std;
// int  main ()
// {
//     int n = 5;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=i ;j++){
//             cout <<j<<" ";
//         }
//         cout << endl;
    
//     }
// }


// ----------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {

//     for(int i = 5; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// -------------------------------

// #include<iostream>
// using namespace std;
// int  main ()
// {
//     int n = 5;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=i ;j++){
//             cout <<i<<" ";
//         }
//         cout << endl;
    
//     }
// }


//--------------------------------------------------


// #include<iostream>
// using namespace std;
// int  main ()
// {
//     int n = 5;
//     int A=1;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=i ;j++){
//             cout <<A<<" ";
//             A++;
//         }
//         cout << endl;
    
//     }
// }


//-----------------------------------
 
// #include <iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= i; j++) {
//             if((i + j) % 2 == 0)
//                 cout << "0" <<" ";
//             else
//                 cout << "1" <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//----------------------------------

// #include<iostream>
// using namespace std;
// int  main ()
// {
//     char n = 'E';
//     for (char i = 'A' ; i<=n ; i++){
//         for (char j = 'A' ; j<=i ;j++){
//             cout <<j<<" ";
//         }
//         cout << endl;
    
//     }
// }


//--------------------------------------

// #include<iostream>
// using namespace std;
// int  main ()
// {
//     int n = 5;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=i ;j++){
//             cout << char('A'+ i-1)<<" ";
//         }
//         cout << endl;
    
//     }
// }



//---------------------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n - i; j++)
//             cout << " ";

//         for(int j = 1; j <= 2 * i - 1; j++)
//             cout << i;

//         cout << endl;
//     }
// }

//----------------------------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n - i; j++)
//             cout << " ";

//         for(int j = 1; j <= 2 * i - 1; j++)
//             cout << j;

//         cout << endl;
//     }
// }


// -----------------------------------------



#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        // spaces
        for(int j = 1; j <= n - i; j++)
            cout << " ";

        // alphabets
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << char('A' + j - 1);

        cout << endl;
    }
}





