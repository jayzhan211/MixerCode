#Precode
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<queue>
#include<string>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<vector>
#include<stack>
#include<ctime>
#include<vector>
#define Accel ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define LL long long
#define Re(a,b) memset(a,b,sizeof(a))
#define N 1100000
#define M
#define scanf scanf_s
using namespace std;
int main(){
Accel;
}
-
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
#Fast power algorithm
LL pw(LL a, LL b,LL M) { return b ? b & 1 ? a*pw(a, b - 1) % M : pw(a*a%M, b >> 1) : 1; }
#GCD
int gcd(int a, int b) { return b ? gcd(b, a%b) : a };
#EXGCD
def ext_euclid(a, b):
    if (b == 0):
        return 1, 0, a
    else:
        x, y, q = ext_euclid(b, a % b) 
        x, y = y, (x - (a // b) * y)
        return x, y, q
ext_euclid(a,b) return x,y,gcd(a,b) ,ax+by=1
