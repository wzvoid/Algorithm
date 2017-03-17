#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;
int main(int argc, char *argv[]) {
    vector<int> v(10,1);
    assert(v.size()>10);
#ifndef NDEBUG
    cerr<<__FILE__<<" "<<__FUNCTION__<<" ";
#endif
    return 0;
}