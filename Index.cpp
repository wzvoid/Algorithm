#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
    vector<int> v;
    for(int i=1;i!=11;++i) {
        v.push_back(i);
    }
    for(const auto c:v)
        cout<<c<<" ";
    v.resize(5);
    cout<<endl;
    for(const auto c:v)
        cout<<c<<" ";
    cout<<v.size()<<" "<<v.capacity();
    return 0;
}