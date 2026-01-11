// What is array ? --> list of similart iteams 
                    // elements stored in contigous memory location

  // store a fixed size sequential collection of elements 

  // Array is data structure yo create a  1D , 2D ,3D  array 

// synatx --> int arr[10]; // 1D array of 10 integers
            
  


// creation od Array : 

#include<iostream>
using namespace std;
int main(){
//    int arr[10];
//    char drr[9];
//    float wrr[5];
//    long urr[20];
//    bool prr[2];
//    short trr[15];  


//    cout << "Array created successfully :" << endl;

//-->address of first element of array

//--> address find element
// int a = 10;
// cout << "Address of a : " << &a << endl;
// int arr[5];
// cout << "Address of first element of arr : " << &arr[0] << endl;

// --> size of array
// int grr[10];
// cout << "size of grr is : " << sizeof(grr) << endl;


/// -->>  Array initialization --> very most important topc for array consept:

// int arr[5] = {1,2,3,4,5}; // method 1
// int drr[]  = {6,7,8,9,10}; // method 2
// int wrr[5] = {11,12}; // method 3
// int urr[2] = {1,2,5,4,6}; // method 4 --> not memory space have required for 5,4,6 elements so this method is wrong


// -- >> this initializer is a bad practics for appy in your qus sloving: because any compailer have error show :
// int n;
// cout << "Enter a number of elements: ";
// cin >> n;
// int arr[n];
// cout << "Array initialized successfully :" << endl;


//#-->> indexing in Array :-> 0-based indexing is a rule for indexing in array menas first element index is 0 , second element index is 1 and so on...

// int arr[5] = {10,20,30,40,50};
// cout << arr[1] << endl;
// cout << arr[3] << endl;


// char arr[] ={'H','E','L','L','O'};
// cout << arr[0] << endl;

// int arr[5] = {10,20,30,40,50};
// int  n =5;
// for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
// }


//--> taking input in array :

// int arr[5];
// int n =5;
// for(int i=0;i<n;i++){
//   cout << "Enter a idexing element for arr" << i << "  ";
//   cin >> arr[i];

//   cout << endl;   
// }
// // print array elements
// cout << "Array elements are : " << endl;
// for(int i=0;i<n;i++){
//   cout << arr[i] << " "; 

// probelm statemnet :--> take a input in array and print double of each element -->
// int arr[10];
// int n=10;
// for(int i=0;i<n;i++){
//   cout << "Enter a index element for arr " << i << " : ";
//   cin >> arr[i];
//   cout << endl;
// }
// // print array elements for double
// cout << "Array elements are : " << endl;
// for(int i=0;i<n;i++){
//   arr[i] = arr[i] * 2; // double of each element
//   cout << arr[i] << " "; 
// }
// cout << endl;
// // print double of each element
// cout << "Doubled elements are : " << endl;
// for(int i=0;i<n;i++){
//   cout << arr[i]*2 << " ";
// }

}