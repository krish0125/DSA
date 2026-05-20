// // //dynamic array allocation means runtime change array size and value -->
// // #include<iostream>
// // using namespace std;

// // void fun( int arr[], int n){
// //     for(int i=0;i<n;i++){
// //         cout <<arr[i]<<" ";
// // }
// // }

// // int main(){
// //    int n;
// //    cin>>n;
// //    //int *arr = new int[n]; // this value price is 0 and garbage value but we can change it by user input
// //    int arr[n];
// // //   int arr[n];
   
// //    for(int i=0;i<n;i++){ // user input for array value:--
// //        int x;
// //        cin>>x;
// //        arr[i] = x;
// //    }

// //    arr[6] = 10; // this value is garbage value but we can change it by user input
// //    fun(arr,n);
// // }

// // dynamic array -->
// //using vecator -->

// #include<iostream>
// #include<vector>
// using namespace std;
// void printarry(vector<int>v){
//     int size = v.size();
//     for(int i=0;i<v.size();i++){
//         cout <<v[i]<<" ";
//     }
// }   
// int main(){
//     vector<int>v;
//     //insert -->
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
    
// }