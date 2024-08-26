//2nd program in DSA series i.e. Data types

#include<iostream>
using namespace std;
int main(){
  int num=10;//integer dataType
  cout<<"the integer is "<<num<<endl;
  int size1=sizeof(num);    //sizeof() method(function) is used to check the size of particular datatypes suh as integer or array etc.
  cout<<"the size of integer is "<<size1<<endl;
  char ch='a';    //character dataType . only one character is allowed at a time
  cout<<"the character is "<<ch<<endl;
  int size2=sizeof(ch);
  cout<<"the size of character is "<<size2<<endl;
  float decimal=9.97;    //float(deccimal) datatype
  cout<<"the Float decimal is "<<decimal<<endl;
  int size3=sizeof(decimal);
  cout<<"the size of float is "<<size3<<endl;
  double big_num=98765432100;    //double datatypes..  used for long integer
  cout<<"the double is "<<big_num<<endl;
  int size4=sizeof(big_num);
  cout<<"the size of double is "<<size4<<endl;
  bool bl=true;  //boolean datatype used for binary output([0,1],[true,false])
  cout<<"the boolean is "<<bl<<endl;
  int size5=sizeof(bl);
  cout<<"the size of boolean is "<<size5<<endl;
}



//here we have only considering basic dataTypes
//going on next we will walkthrough multiple different datatypes
