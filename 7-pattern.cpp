//Here we are taking many more pattern examples for more clear understanding
//here main three pattern you need to keep in mind are 1st, 5th, 9th


//      1st
 #include<iostream>
 using namespace std;
 int main() {
 int n, row=1;
 cout << "Enter the number of elements: ";
 cin >> n;
 while(row<=n){
   int col=1;
   while(col<=n){
     cout << " * ";
     col++;
   }
   cout << endl;
   col++;
 }
 }

//above pattern will give a 
// * * *
// * * *
// * * *





//      2nd
#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Outer loop for rows
    while (i <= n) {
        int j = 1;
        
        // Print numbers in ascending order
        while (j <= n) {
            cout << j;
            j++;
        }        
        // Print numbers in descending order
        j = n;
        while (j >= 1) {
            cout << j;
            j--;
        }        
        cout << endl;
        i++;
    }
    return 0;
}





//        3rd
 #include <iostream>
 using namespace std;
 int main() {
     int n,i = 1;  // Initialize row variable
     cout << "Enter the number of elements: ";
     cin >> n;
     while (i <= n) {  // Outer loop to control rows
         int j = 0;  // Initialize column variable
         while (j < n) {  // Inner loop to print 4 times each row
             cout << i << " ";  // Print the value of i
             j++;  // Increment column counter
         }
         cout << endl;  // New line after each row
         i++;  // Increment row counter
     }
     return 0;
 }
//1 1 1
//2 2 2
//3 3 3




//        4th
 #include<iostream>
 using namespace std;
 int main() {
   int n,i=1, count=1;
   cout<<"enter a number: "<<endl;
   cin>>n;
   while(i<=n){
     int j=1;
     while(j<=n){
       cout<<count<<" ";
       j++;
       count++;
     }
     cout<<endl;
     i++;
   }
 }
//1 2 3
//4 5 6
//7 8 9




//            5th
//here we are taking pattern as a right angle triangle(number or star.)

 #include<iostream>
 using namespace std;
 int main() {
   int n,i=1;
   cout<<"enter a number: "<<endl;
   cin>>n;
   while(i<=n){
     int j=1;
     while(j<=i){
       cout<<" * ";
       j++;
       }
       cout<<endl;
       i++;
   }
 }





//        6th
 #include<iostream>
 using namespace std;
 int main() {
   int n,i=1;
   cout<<"enter a number: "<<endl;
   cin>>n;
   while(i<=n){
     int j=1;
     while(j<=i){
       cout<<i<<" ";
       j++;
       }
       cout<<endl;
       i++;
   }
 }





//        7th
 #include<iostream>
 using namespace std;
 int main() {
   int n,i=1;
   cout<<"enter a number: "<<endl;
   cin>>n;
   while(i<=n){
     int j=1;
     while(j<=i){
       cout<<i+j-1<<" ";
       j++;
       }
       cout<<endl;
       i++;
   }
 }




//        8th
 #include<iostream>
 using namespace std;
 int main() {
   int n,i=1;
   cout<<"enter a number: "<<endl;
   cin>>n;
   while(i<=n){
     int j=1;
     while(j<=i){
       cout<<i-j+1<<" ";
       j++;
       }
       cout<<endl;
       i++;
   }
 }





//        9th
#include<iostream>
using namespace std;
int main() {
  int n,i=1;
  cout<<"enter a number: "<<endl;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+i+j-2;
      cout<<ch<<" ";
      j++;
      }
      cout<<endl;
      i++;
  }
}





