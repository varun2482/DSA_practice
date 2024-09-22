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




//        2nd
#include<iostream>
using namespace std;
int main()    {
    int a=1,b=2;
    if(a-- > 0 && ++b > 2) {        //here && operator is used to go into if loop iff both conditions are true......
        cout<<"Inside If....";
    }
    else {
        cout<<"Inside else....";    }
    cout<<a<<" "<<b;
}





//        3rd
#include<iostream>
using namespace std;
int main() {
     int a=1,b=2;
    if(a-- > 0 || ++b > 2) {        //here || operator is used to go into if loop if any one of condition is true......
        cout<<"Inside If....";
    }
    else {
        cout<<"Inside else....";    }
    cout<<a<<" "<<b;
}





//        4th
#include<iostream>
using namespace std;
int main() {
    int num=3;
    cout<<(25 * (++num)) ;
}
