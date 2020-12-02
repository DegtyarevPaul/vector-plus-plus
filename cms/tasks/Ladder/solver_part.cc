#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
    long long m;
    cin >> m;
    int b[m];
    int max=0;
    long long n=m;
    for(int i=0; i<m;i++)
    {
        cin >> b[i];
        if(b[i]>max)max=b[i];
    }
    int fl[100001];
    for(int i=0;i<100000;i++)
        fl[i]=0;
    for(int i=0; i<m;i++)
    {
        if(b[i]!=max)
        {
        fl[b[i]]++;
        if(fl[b[i]] >= 3) n--;
        }
        else n--;

    }
    n++;
    cout << n << endl;
    for(int i=0;i<max;i++)
        if(fl[i]>0) cout << i << " ";
    cout << max << " ";
    for(int i=max-1; i>0; i--)
        if(fl[i]>1) cout << i << " ";
    cout <<endl;
return 0;
}
