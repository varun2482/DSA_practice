#include<iostream>
using namespace std;
int main() {
  int a=5,b=7;
  //adding  explanation about relational operator.
  bool first=(a==b);    //here == operator is used to where right hand is equal to left hand or not
  cout<<first<<endl;
  //here we can check if our above relation is true(1) or false(0)
  
  bool second=(a!=b);   //here != operator will return 1 as outut when a is not equal to b.
  cout<<second<<endl;
  bool third=(a>=b);
  cout<<third<<endl;
  bool fourth=(a<=b);
  cout<<fourth<<endl;
  bool fifth=(a>b);
  cout<<fifth<<endl;
  bool sixth=(a<b);
  cout<<sixth<<endl;
}
