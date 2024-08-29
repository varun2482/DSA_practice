//  printing numbers sequentially upto n 

//  #include<iostream>
//  using namespace std;
//  int main() {
//    int num , i=1;
//    cout<<"Enter a number: ";
//    cin>>num;
//    while(i<=num) {
//      cout<<i<<"\n";
//      i++;
//      }
//      return 0;
//  }






// print sum of first n numbers 

// #include<iostream>
// using namespace std;
// int main() {
//   int num , i=1 , sum=0;
//   cout<<"enter a number "<<endl;
//   cin>>num;
//   while(i<=num){
//     sum=sum+i;
//     i++;
//   }
//   cout<<"sum of first "<<num<<" natural numbers is "<<sum<<endl;
// }



//sum of all even numbers
#include<iostream>
using namespace std;
int main() {
  int num , i=1 , sum=0;
  cout<<"enter a number "<<endl;
  cin>>num;
  while(i<=num){
    if(i%2==0)
    sum=sum+i;
    i++;

  }
  cout<<"sum of all even numbers till "<<num <<"is "<<sum<<endl;
}  




