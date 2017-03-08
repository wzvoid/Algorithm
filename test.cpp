#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    int a[3][4][5]={0};
    for(auto &rows:a)
        for (auto &cols:rows)
            for(auto ss:cols)
                cout << ss<< " ";
    return 0;
}