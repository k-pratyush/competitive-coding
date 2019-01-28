#include<iostream>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long i,j,k,n,m,t;
    t = 1;
    while(t--)
    {
        n = 2080351687;
        k=0;
        m=1;
        while(m<=n)
        {
            k+=1;
            m*=2;
        }
        cout<<k<<"\n";
    }

}