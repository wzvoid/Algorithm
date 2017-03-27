#include <iostream>
#include <vector>
#include <string>

using namespace std;


int hamming(int);

int main() {
    cout<<hamming(2);//  0010 0101
    return 0;
}

int hamming(int x) {
    unsigned int a = x;
    return ~a;
}