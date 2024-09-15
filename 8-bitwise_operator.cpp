/*
#include<iostream>
using namespace std;

int main() {
    int a, b;
    
    // Input two integers
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;

    // Perform bitwise AND operation
    cout << "a & b = " << (a & b) << endl;    

    // Perform bitwise OR operation
    cout << "a | b = " << (a | b) << endl;

    // Perform bitwise NOT operation on 'a'
    cout << "~a = " << (~a) << endl;

    // Perform bitwise XOR operation
    cout << "a ^ b = " << (a ^ b) << endl;

    // Left shift a by 1
    cout << "a << 1 = " << (a << 1) << endl;

    // Right shift b by 1
    cout << "b >> 1 = " << (b >> 1) << endl;

    return 0;
}    */








#include<iostream>
using namespace std;
int main(){
    int i=9;
    
    cout<<(i++)<<endl;        //this is post-increment operator
    cout<<(++i)<<endl;        //this is pre-increment operator
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
}
