/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//Write a program using copy constructor to data of an object to another object

class code{
    int id;
    public:
    code(){}
    code(int a){    }
    code(code &x){
        id = x.id;
    }
    void display(void){
        cout<<id;
    }
};
int main(){ // memory location addres sof all objects are the same
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;
    cout<<"\n id of A: ";
    A.display();
    cout<<"\n id of B: ";
    B.display();
    cout<<"\n id of C: ";
    C.display();
    cout<<"\n id of D: ";
    D.display();
    return 0;
    
}