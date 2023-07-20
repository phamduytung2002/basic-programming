#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a=11, b=22, c=0;
    c = a + b + a++ + b++ + ++a + ++b;
    cout<<c;
}