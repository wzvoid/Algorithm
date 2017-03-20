#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<int> getDigits(int num){

}

int addDigits(int num) {

}

int main() {
    int n=100;
    string s="";
    while (true){
        s.insert(0,to_string(n%2));
        n=n/2;
        if(n==0)
            break;
    }
    cout<<s;
    return 0;
}