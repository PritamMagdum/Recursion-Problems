#include <bits/stdc++.h>
using namespace std;

// print in terms of 1 -to-> N by Backtracking

void print(int i,int n){
    if(i < 1) return;
print(i-1,n);
cout << (i) << endl;
}

int main(){
    int n;
    cin >> n ;
    print(n,n);
}