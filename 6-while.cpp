//    while loop

// printing numbers sequentially upto n 
//    1st
  #include<iostream>
  using namespace std;
  int main() {
    int num , i=1;
    cout<<"Enter a number: ";
    cin>>num;
    while(i<=num) {
      cout<<i<<"\n";
      i++;
      }
      return 0;
  }






//    2nd
// print sum of first n numbers 

 #include<iostream>
 using namespace std;
 int main() {
   int num , i=1 , sum=0;
   cout<<"enter a number "<<endl;
   cin>>num;
   while(i<=num){
     sum=sum+i;
     i++;
   }
   cout<<"sum of first "<<num<<" natural numbers is "<<sum<<endl;
 }





//      3rd
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
