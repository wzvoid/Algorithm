#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
    int i[]={0,3,4,5,7};
    cout<<(sizeof(i)/ sizeof(*i));
    return 0;
}