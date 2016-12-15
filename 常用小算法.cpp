//
// Created by wzvoid on 2016/12/15.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//求整数二进制
string binary(int n){
    string s="";
    while (true){
        s.insert(0,to_string(n%2));
        n/=2;
        if(n==0)
            break;
    }
    return s;
}

int main(){
    cout<<binary(11024);
    return 0;
}