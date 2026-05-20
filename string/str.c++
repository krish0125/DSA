//topic is string --> [20/05/2026] -->

//[1] --> find a string length using strlen() function-->
// using str.length() function -->
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "Hello_World";
//     cout <<"length of string is = " << str.length() << endl;
//     return 0;
// }
//[2] --> find a string length using strlen() function-->
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s1 = "Java Programming";
//     for(int i = 0; i < s1.length(); i++) {
//         cout << "Index " << i  << " : " << s1[i] << endl;
//     }
//     return 0;
// }

//[3] --> user can s1 and s2 and s3 string so usieng == and !== = operator
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s1 = "Java Programming";
//     string s2 = "Java Programming";
//     string s3 = "Python Programming";

//     if(s1 == s2) {
//         cout << "s1 and s2 are equal" << endl;
//     } else {
//         cout << "s1 and s2 are not equal" << endl;
//     }
//     cout << endl;
//     if(s1 != s3) {
//         cout << "s1 and s3 are not equal" << endl;
//     } else {
//         cout << "s1 and s3 are equal" << endl;
//     }

//     return 0;
// }

//[4] -> Print ASCII Value of Each Character in a String
// #include<iostream>
// using namespace std;
// int main() {
//     string s1 = "Java Programming";
//     for(int i = 0; i < s1.length(); i++) {
//         cout << i + s1[i] << endl;
//     }
//     return 0;
// }

//[5] --> concatination of string using concat() function -->
//  #include<iostream>
//  #include<string>
//  using namespace std;
//     int main() {
//         string s1 = "Java ";
//         string s2 = "Programming";
//         string s3 = s1 + s2; // using + operator for concatenation
//         cout << "Concatenated String: " << s3 << endl;
//         return 0;
//     }

//[6] --> concatination of string using append() function -->
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s1 = "Java ";
//     string s2 = "Programming";
//     // using concat through append()
//     s1.append(s2);
//     cout << "Concatenated String: " << s1 << endl;

//     return 0;
// }

//[7] -->substring or idex find -->
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s1 = "Java Programming";
//     string s2 = "Programming";
//     size_t found = s1.find(s2);
//     if(found != string::npos) {
//         cout << "Substring found at index: " << found << endl;
//     } else {
//         cout << "Substring not found" << endl;
//     }
//     return 0;
// }
