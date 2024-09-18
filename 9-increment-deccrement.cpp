#include<iostream>
using namespace std;
int main()
{
    cout<<(i++)<<endl;        //this is post-increment operator
    cout<<(++i)<<endl;        //this is pre-increment operator
    cout<<(i--)<<endl;        //this is post-decrement operator
    cout<<(--i)<<endl;        //this is pre-decrement operator
}




//----------------------------------------------Examples---------------------------------------------
//        1st
#include<iostream>
using namespace std;
int main()    {
    int a, b=5;
    a=10;
    if(++a)
        cout<<b;
    else
        cout<<++b;
}
