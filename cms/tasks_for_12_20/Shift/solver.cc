#include <iostream> 
using namespace std; 

int main() 
{ 
    int n; 
    long long k; 
    int a[50],b[50]; 
    cin >> n; 
    for(int i=0; i<n;i++) 
        cin >> a[i]; 
    cin >> k; 
    k%=n; 
    for(int i=0;i<n;i++) 
    { 
        int j = i+k; 
        j%=n; 
        b[j]=a[i]; 
    } 

    for(int i=0;i<n;i++) 
        cout << b[i] << " "; 
    return 0; 
} 
