// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     char alpha;

//     cout << "Enter any number to print their pattern of alphabets:";
//     cin >> n;

   

//     for (int i = 0; i < n ; i++)
//     { 
//         char alpha = 'A';      //i declared A inside of outer loop  bcz i want to print A in the start of every line
//         for (int j = 0; j<(i+1); j++)    
//         {
//             cout << alpha;
//             alpha++;              //bcz after printing A i move toward next in alphabet a=65   ,  now 66=b
//         }

//         cout << endl;
//     }

   

//     return 0;
// }

// This is sample of output of my programme
//  output:

// n=8;

// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH









// #include <iostream>
// using namespace std;

// int main(){

// int n;
// char ch='A';

// cout<<"Enter any no to print pattern of chracters:";
// cin>>n;

// for (int i = 0; i < n ; i++)
// {
    
//     for (int j = 0; j < n; j++)
//     {
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }

//     return 0;
// }









// Pyramid

// #include<iostream>
// using namespace std;
// int main(){

// int nu;

// cout<<"Enter number to print pyramid pattern:";
// cin >> nu;

// for (int i = 0; i < nu; i++)
// {
//     for (int j = 0;  j < (i+1); j++)
//     {
//         cout<< "*";
//     }

//     cout << endl ;
    
// }


//     return 0;
// }











// *****
// ****
// ***
// **
// *


// #include<iostream>
// using namespace std;

// int main(){
// int a;
//     int n;
   

//     cout<<"Enter any number for reverse pyramid:";
//     cin>>n;

//     for (int i = 0; i < n ; i++)
//     {
//         for (int j = n; j > i ; j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }

//     return 0;
// }












// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// int main (){

// int n;

// cout<<"Enter any number to print pyramid of both:";
// cin>>n;

// for (int i = 0; i < n; i++)
// {
//     for (int j = n; j > i; j--)
//     {
//         cout<<"*";
//     }

//     cout<<endl;
    
// }

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < (i+1) ; j++)
//     {
//         cout<<"*";
//     }
    
//     cout<<endl;
// }



//     return 0;
// }








//       *
//      **
//     ***
//    ****
//   *****
//  ******

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
// cout<<"Enter any number to print pattern:";
// cin>>n;

// for (int i = n; i > 0 ; i--)
// {
//     for (int j = 1; j <= i ; j++)
//     {
//         cout<<" ";
//     }

//     for (int k = i ; k <= n ; k++)
//     {
//         cout<<"*";
//     }
    
//     cout<<endl;
    
// }


//     return 0;
// }











// *****
//  ****
//   ***
//    **
//     *

// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cout<<"Enter any number to print pattern:";
// cin>>n;

// for (int i = n; i > 0; i--)
// {
//     for (int j = 1; j <= n-i; j++)
//     {
//         cout<<" ";
//     }

//     for (int k = 1; k <= i; k++)
//     {
//         cout<<"*";
//     }
    
//     cout<<endl;
// }


// return 0;
// }







//       * 
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
// cout<<"Enter any number to print pattern:";
// cin>>n;

// for (int i = n; i > 0 ; i--)
// {
//     for (int j = 1; j <= i ; j++)
//     {
//         cout<<" ";
//     }

//     for (int k = i ; k <= n ; k++)
//     {
//         cout<<"* ";
//     }
    
//     cout<<endl;


    
// }

// return 0;

// }