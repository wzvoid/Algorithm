#include <iostream>
#include <vector>
using namespace std;
typedef string::size_type SIZE;
//using SIZE = string::size_type;

int main(int argc, char *argv[]) {
    string a("hello world!!!");
    for(auto &c:a)
        c=toupper(c);
    cout<<a<<endl;
    return 0;
}