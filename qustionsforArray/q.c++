// count 0` s & 1`s in a  array : probelm statement 1:-->
// #include<iostream>
// using namespace std;
// int main(){

//     int arr[8] = {0,1,0,1,0,0,1,1};
//     int count0 =0;
//     int count1 =0;
//     int n;
//     cout << " Enter the size of array : ";
//     cin >> n;

// for(int i=0;i <n;i++)
// {
//     if(arr[i] == 0){
//         count0++;
        
//     }
//     else{
//         count1++;
//     }
// }
//     cout<<"count of 0's is : "<<count0<<endl;
//     cout<<"count of 1's is : "<<count1<<endl;

//     return 0;
// }    


// minimum number in array : problem statement 2:-->
// #include<iostream>
// using namespace std;
// int main(){
//     int arr [10] = {5,3,8,1,4,9,2,6,7,0};
//     int minAns;

//     for(int i=0;i<10;i++){
//         if(arr[i] < arr[0]){
//            minAns = arr[i];
//         }
//     }
//     cout << "minimum numbr :" << minAns << endl;
// }

// maximum number in array : problem statement 3:-->
// #include<iostream>
// using namespace std;
// int main(){
//     int arr [10] = {5,3,8,1,4,9,2,6,7,0};
//     int max = arr[0];

//     for(int i=0;i<10;i++){
//         if(arr[i] > max){
//             max =arr[i];
//         }
//     }
//     cout<<" maximum number in array is : "<<max<<endl;
// }

// minimum number to function rule to find :-->
// #include<iostream>
// using namespace std;

// int printMinimumNumber(int arr[], int size) {
//     int minArray = arr[0];   // initialize with first element

//     for(int i = 1; i < size; i++) {
//         if(arr[i] < minArray) {
//             minArray = arr[i];
//         }
//     }

//     return minArray;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int size = 6;

//     int min = printMinimumNumber(arr, size);
//     cout << "Minimum value: " << min << endl;

//     return 0;
// }


// 



// reverse array for even number and odd number logic is clear left is ++ and right is -- so swap is arr[left] , arr[right] --> cod is hear 

// #include<iostream>
// using namespace std;
// // using function define

// void reverserprint(int arr[], int size){
    
// int left =0;
// int right = size-1;

// while(left<=right){
   
//     swap(arr[left],arr[right]);
//     left++;
//     right --;
//   }

//   //array print
 
//  for(int i=0;i<size;i++){
//    cout << arr[i] << " ";

// }
// }

// int main(){

//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int size = 9;

// // function call 
//    reverserprint(arr,size);
// }

// extreme print in Array :-->
//  #include<iostream>
// using namespace std;
// // using function define

// void reverserprint(int arr[], int size){
    
// int left =0;
// int right = size-1;

// while(left<=right){
//     if(left == right){
//         cout << arr[left] << " ";
//     }
//     else{
//         cout << arr[left] << " " ;
//         cout << arr[right] << " ";
//     }

//     left++;
//     right --;
//   }
// }

// int main(){

//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int size = 9;

// // function call 
//    reverserprint(arr,size);
// }

