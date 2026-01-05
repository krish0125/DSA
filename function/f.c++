// #include<iostream>
// using namespace std;

// // void printA(){
// //     cout << "inside a A:" << endl;

// //     cout << "going back to main :" << endl;


// // }


// // int main (){

// // cout << "inside the main :" << endl ;

// // printA();

// // cout << "back to main :" << endl;

// // return 0; 

// // }





// void printA(){

//     cout << " inside A : " << endl; 

//     printB();

     
// }


// void printB(){

//     cout << " inside B : " << endl; 

//     printC();

     
// }

// void printC(){

//     cout << " inside A : " << endl; 

    
     
// }

// int main (){

//     printA();
//     printB();
//     print c();
// }


// Q-1 < write a function to print sum of 3 sum ::

// #include<iostream>
// using namespace std;

// int printsum (int  a, int b, int c){

//     int sum = a + b + c;
//     return sum;
// }


// int main(){

//      int ans = printsum( 5 ,6, 7);

//      cout << ans << endl;


// }


// Q-2 --> find max of three number 

// #include<iostream>
// using namespace std;

// void printnumber(int num1, int num2, int num3){

//     if(num1 > num2 && num1 > num3){
//         cout << num1 << endl;
//     }else if( num2 > num1 && num2 > num3){
//         cout << num2 << endl;
//     }else{
//         cout << num3 << endl;
//     }

// }


// int main (){
//     printnumber(6,8,7);
//     return 0;
// }

//using max keyword to find a maximum number
// #include<iostream>
// using namespace std;

// void println(int n1, int  n2, int n3){
//     int ans1 = max(n1,n2);
//     int final = max(ans1,n3);

//     cout << final << endl;
// }

// int main(){
//     println(5,6,8);
//     return 0;
// }


// Q3 --> print all integer value 1 to N

// #include<iostream>
// using namespace std;


// void printnumber(int n){

    
//     for(int i=0;i<n;i++){
//         cout << "print all interger value: " << i << endl;
//     }
// }


// int main(){

//     printnumber(100);

// }


// Q-4 -->  even or odd number 

// #include<iostream>
// using namespace std;

// void printprime (int n){
//     if(n % 2 == 0 ){
//         cout << "A number is :" << "Even" << endl;
//     }else{

//         cout << "A number is :" << "odd" << endl;
//     }
    
// }


// int main (){

//     printprime(7);
//     return 0;
// }


//Q-4 --> print a prime number :

// #include<iostream>
// using namespace std;

// void printprime(int n){

//     for(int i=2; i<n;i++){
//         if(n%i ==0){
//             cout << "NOt prime number: " << endl;
//             return ;
//         }else{
//             cout << "prime number :" << endl;
//             return ;
//         }

//         cout << endl;
//     }

// }


// int main(){
//     printprime(6);
//     return 0;
    
// }


//q-5 --> sum of 1 to n number 

// #include<iostream>
// using namespace std;

// void sumofnumber(int n){

//     int sum = 0;

//     for(int i=1;i<=n;i++){
//         sum = sum + i;

        
//     }

//     cout << sum << endl;
// }

// int main (){

//     sumofnumber(5);
    

// }

