//Write a program to design a class for complex numbers to add, subtract  2 complex number
#include <iostream>
#include<conio.h>
using namespace std;
class complex{
    float x,y;
    public:
   // complex (float real, float img){
    //    x = real;y = img;
    //}
    void input(float real, float img){
        x = real;y = img;
    }
    friend complex sum(complex, complex);
    friend complex sub(complex, complex);
    friend complex mult(complex, complex);
    void show(complex);
};
complex sum(complex c1, complex c2){
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
complex sub (complex c1, complex c2){
    complex c4;
    if(c1.x > c2.x){
    c4.x = c1.x - c2.x;}
    else c4.x = c2.x - c1.x;
    
    if(c1.y > c2.y){
    c4.y = c1.y - c2.y;}
    else
    c4.y = c2.y - c1.y;
    return c4;
}
void complex :: show(complex c){
    cout << c.x <<  "+j" << c.y << "\n";
    
    
}

int main(){
    complex A,B,C;
    A.input(3.1, 5.65);
    B.input(5,7);
    //B.x = 5, B.y = 7;
    C = sum(A, B);
    cout<<"A=";
    A.show(A);
    // instead of C.sub(A, B)
    // Since A & B are both complex data type we can just assign one another
    C = sub(A,B);
    cout<<"B=";
    B.show(B);
    cout<<"C=";
    C.show(C);

    return 0;
    
}



