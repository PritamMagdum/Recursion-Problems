#include <bits/stdc++.h>
using namespace std;

// print in terms of N -to-> 1 by Backtracking

void print(int i,int n){
    if(i > n) return;
print(i+1,n);
cout << (i) << endl;
}

int main(){
    int n;
    cin >> n ;
    print(1,n);
}