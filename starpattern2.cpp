/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

int main (){
    int row=1;
    int col=1;
    while(row<=4){
        while(col<=row){
            int n=4-row+1;
            while(n>=1){
                cout<<"*";
                n--;
            }
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}