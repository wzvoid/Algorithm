#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

void f();
void f(int a);
void f(const int a);
void f(int a,int b);
void f(double a, double b);

int main(int argc, char *argv[]) {
    f(3.3,5.7);
    return 0;
}

void f(){
    cout<<"f()";
}
void f(int a){
    cout<<"f(int a)";
}
void f(const int a){
    cout<<"f(const int a)";
}
void f(int a,int b){
    cout<<"f(int a,int b)";
}
void f(double a, double b){
    cout<<"f(double a,double b)";
}