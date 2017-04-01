#include <iostream>
using namespace std;

void hano(int n,int p1,int p2,int p3);
inline void swap(int &a,int &b);
bool isSwap(int a[], int start, int end);
void permutation(int arry[],int start, int end);

int main() {
    int arry[] = {1, 2, 3};
    permutation(arry, 0, 2);
    return 0;
}

void hano(int n,int p1,int p2,int p3) {
    static int count = 0;
    if (n==1) {
        ++count;
        cout<< count << "：从 " << p1 << " -> " << p3 << endl;
    } else {
        hano(n-1,p1,p3,p2);
        ++count;
        cout<<count<<"：从 "<<p1<<" -> "<<p3<<endl;
        hano(n-1,p2,p1,p3);
    }
}

inline void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool isSwap(int arry[], int start, int end) {
    for (int i = start; i <= end; ++i) {
        if(arry[i] == arry[end])
            return false;
    }
    return true;
}

void permutation(int arry[],int start, int end) {
    static int count1 = 0;
    if (start == end) {
        ++count1;
        cout << count1 << ":";
        for (int i = 0; i <= end; ++i) {
            cout << arry[i];
        }
        cout << endl;
    } else {
        for (int i = start; i <= end; ++i) {
            if (true) {
                swap(arry[start], arry[i]);
                permutation(arry, start + 1, end);
                swap(arry[start], arry[i]);
            }
        }
    }
}