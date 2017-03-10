#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// t="aa"
// s="a"

//char findTheDifference(string s, string t) {
//    string::size_type ssize = s.size(),tsize = ssize +1;
//    int i;
//    for (i = 0; i < tsize; ++i) {
//        if(string::npos == s.find(t[i]))
//            break;
//    }
//    if(i>=tsize)
//        return t[tsize-1];
//    else
//        return t[i];
//}

// beat 1.07%
char findTheDifference(string s, string t) {
    string::size_type ssize = s.size(),tsize = ssize +1;
    int i,j;
    bool flag;
    for ( i = 0; i < tsize; ++i) {
        flag= false;
        for ( j = 0; j < ssize; ++j) {
            if(s[j]==' ')
                continue;
            if(s[j]==t[i]){
                s[j]=' ';
                flag=true;
                break;
            }
        }
        if(!flag){
            return t[i];
        }
    }
}

// beat 0.96%
//char findTheDifference(string s, string t) {
//    string::size_type ssize = s.size(),tsize = ssize +1;
//    int k;
//    for (int i = 0; i < ssize; ++i) {
//        for (int j = 0; j < tsize; ++j) {
//            if(t[j]==' ')
//                continue;
//            if(t[j]==s[i]){
//                t[j]=' ';
//                break;
//            }
//        }
//    }
//    for (k = 0; k < tsize; ++k) {
//        if(t[k]!=' ')
//            break;
//    }
//    return t[k];
//}

int main() {
    string s("abcd");
    string t("bcdae");
    cout<<findTheDifference(s,t);
    return 0;
}