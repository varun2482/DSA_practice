#include<iostream>
using namespace std;
int main(){
  int num=10;
  cout<<"the integer is "<<num<<endl;
  int size1=sizeof(num);
  cout<<"the size of integer is "<<size1<<endl;
  char ch='a';
  cout<<"the character is "<<ch<<endl;
  int size2=sizeof(ch);
  cout<<"the size of character is "<<size2<<endl;
  float decimal=9.97;
  cout<<"the Float decimal is "<<decimal<<endl;
  int size3=sizeof(decimal);
  cout<<"the size of float is "<<size3<<endl;
  double big_num=98765432100;
  cout<<"the double is "<<big_num<<endl;
  int size4=sizeof(big_num);
  cout<<"the size of double is "<<size4<<endl;
  bool bl=true;
  cout<<"the boolean is "<<bl<<endl;
  int size5=sizeof(bl);
  cout<<"the size of boolean is "<<size5<<endl;
}