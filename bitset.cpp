#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {4,5,6,3,2,45,5,9};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
    return 0;
}