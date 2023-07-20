#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a%b==0) return b; // gcd(a,b)=b
	return gcd(b, a%b);
}

/*
a > b
a = b*q + r
r = a%b

gcd(a, b) = gcd(b, r)
*/