#include <bits/stdc++.h>
#define ll long long
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/147
using namespace std;

int main()
{
    ll t1,t2,t3,t4,t5,t6,a,b;
    cin>>t1>>t2>>t3>>t4>>t5>>t6;
    a=t1*60*60+t2*60+t3;
    b=t4*60*60+t5*60+t6;
    cout<<b/__gcd(a,b)<<" "<<a/__gcd(a,b);
    return 0;
}
