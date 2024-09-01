//HERE we are having multiple examples on if-else condition, nested if, normal if , etc.

//    1st
#include<iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (num>0)   //if number is greater than 0 then below part will be run.
  {
    cout << "The number is positive." << endl;
  }
  else if(num=0)    //if this condition is true then this will run.
  {
    cout << "The number is negative." << endl;
  }
  else  //if both above are not true then below code will run
  {
    cout << "The number is zero." << endl;
  }
}






//      2nd
#include<iostream>
using namespace std;
int main()
{
//int num=24;
int num;
cout<<"Enter a number: ";
cin>>num;
if(num>0){
  cout<<"given number is positive"<<endl;
}
else if(num==24){
cout<<"given number is 24"<<endl;
}
else{
cout<<"number is negative";
}
}
