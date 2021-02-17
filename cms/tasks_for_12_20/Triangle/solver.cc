#include <iostream> 
using namespace std; 

int main() 
{ 
    int n, m; 
    int a[35][35]; 
    cin >>n>>m; 

    for(int i=0;i<n;i++) 
        a[i][0] = 1; 
    for(int i=0;i<m;i++) 
        a[0][i] = 1; 
    for(int i=1;i<n;i++) 
        for(int j=1;j<m;j++) 
            a[i][j]=a[i-1][j]+a[i][j-1]; 
    for(int i=0;i<n;i++) 
    { 
        for(int j=0;j<m;j++) 
            cout << a[i][j] << '\t'; 
        cout << endl; 
    } 



    return 0; 
} 
