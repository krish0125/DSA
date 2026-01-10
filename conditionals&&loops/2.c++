// // #include<iostream>
// // using namespace std;    
// // int main(){
// //     int n;
// //     cout << "Enter a number: ";
// //     cin >> n;
// //     cout << "givrn number " << n ;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     float n  ;
// //     cout << "Enter a number: ";
// //     cin >> n;     
// //     if(n>0)
// //         cout << "given number " << n << " is positive";
    
// //     else if(n==0)
// //          cout << "given number " << n << " is zero";   
// //     else
// //          cout << "given number " << n << " is negative";   
    
    

// // }


// //for loop consept

// // #include<iostream>
// // using namespace std;
// // int main(){
// // for ( int i=10; i>=0; i=i-3){
// //     cout << i << endl;
// // }
// // }

// //nested loop #

// // #include<iostream>
// // using namespace std;
// // int main(){

// //     for(int i=1; i<=10;i++){
        
// //             cout << 19* i << endl;        }
// //     }
    
    
    

// // pattern printing!

// #include<iostream>
// using namespace std;
// int main(){
//     int Rows;
//     cout << "Enter number of rows: ";
//     cin >> Rows;
//     int cols;
//     cout << "Enter number of cols: ";   
//     cin >> cols;
//     for(int row=0;row<Rows;row++){
//         for(int col =0;col<cols;col++){

//             if(row==0|| row==Rows-1){
//                 cout << "* ";
//             }
//             else{
//                 if(col==0 || col==cols-1){
//                     cout <<"* ";

//                 }else{
//                     cout << "  ";

//                 }
//             }
//         }
//         cout << endl;

//     }
// }
// // }


// //row=8 & col=6

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;
// //     for(int row=0;row<n;row++){
// //         for(int j=0;j<n-row;j++){
// //             cout << j+1 << " ";
// //         }       cout << endl;
// //     }

    
   
// // }


// // #include<iostream>
// // using namespace std;    
// // int main(){
// //     int n;
// //     cin >> n;
// //     for(int row=0;row<n;row++){

// //         for(int col=0;col<n-row;col++){
// //             cout << "* ";

// //         }
// //         cout << endl;
// //     }
// // }


// //pattern printing 4

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int num;
// //     cout << "Enter a stare number:";
// //     cin >> num;
// //     int n =num/2;
// //     for(int row=0;row<n;row++){
// //         for(int col=0;col<n-row-1;col++){
// //             cout << " ";
// //         }
// //         for(int col=0;col<row+1;col++){
// //             cout << "* ";
// //         }

// //         cout << endl;   
// //     }



// //     for (int row=0;row<n;row++){
// //         for(int col=0;col<row;col++){
// //             cout << " ";
// //         }
// //         for(int col=0;col<n-row;col++){
// //             cout << "* ";
// //         }

// //         cout << endl;

// //     }
// // }

// // #include<iostream>
// // using namespace std;    
// // int main(){
// //     int n;
// //     cout << "Enter a number: ";
// //     cin >> n;
// //     for(int row=0;row<n;row++){
// //         for(int col=0;col<row;col++){
// //             cout << " ";

// //         }
// //         for(int col=0;col<n-row;col++){
// //             if(col == 0 || col==n-row-1){
// //                 cout << "* ";
                

// //             }else{
// //                 cout << "  ";
// //             }
// //         }
        
// //         cout << endl;

// //     }
// // }
// //pattern printing 6
// //print 
// //1
// //1*1
// //1*1*1
// //1*1*1*1

// //    #include<iostream>
// //    using namespace std; 
// //     int main(){
// //          int n;
// //          cout << "Enter a number: ";
// //          cin >> n;
// //          for(int row=0;row<n;row++){

// //                 for(int col=0;col<2*row+1;col++){
// //                     if(col%2 == 0){
// //                         cout << row+1;
// //                     }else{
// //                         cout << "*";
// //                     }
                     
         
         
// //          }
// //             cout << endl;
// //         }
// //     }
    

// //pattern printing 7
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;
// //     for(int row=0;row<n;row++){
// //         for(int col=0;col<row+1;col++){
// //             if(col == row+1-1){
// //                 cout << row+1;
// //             }
// //             else{
// //                 cout << row+1 << "*";
// //             }
            
// //         }
// //         cout << endl;
// //     }

// // }

// //pattern printing 8
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;   
// //      for(int row=0;row<n;row++){
// //         for(int col=0;col<n-row;col++){
// //             if(row == 0 || row == n-1){
            
// //             cout << "*";
// //         }else{
// //             if(col == 0 || col == n-row-1){
// //             cout << "*";
// //         }else{
// //             cout << " ";

        
     
// // }
// // }

// //      }
// //         cout << endl;
// //     }
// // }

// //pattern printing 9
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     for (int row = 0; row < n; row++) {
// //         char ch;

// //         for (int col = 0; col < row + 1; col++) {
// //             ch = col + 'A'-1 + 1;
// //             cout << ch;
// //         }

// //         for (char alphabet = ch - 1; alphabet >= 'A'; alphabet--) {
// //             cout << alphabet;
// //         }

// //         cout << endl;
// //     }

// //     return 0;
// // }


// //pattern printing 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number:";
//     cin >> n;
//     for(int row =0;row<5;row++){
//         for (int col=0;col<row+1;col++){
//             if (col ==0 || col == row+1-1){
//                 cout << row+1;
//             }
//             else{
//                 cout << " ";
//             }
            
//         }
//         cout << endl;
//     }
       
// }
