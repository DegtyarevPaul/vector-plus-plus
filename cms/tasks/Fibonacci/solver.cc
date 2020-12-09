#include <iostream> 
#include <time.h> 
#include <stdlib.h> 
#include <cstring> 
using namespace std; 
int main() 
{ 
    int n; 
    int a,b; 
    cin >> n; 
    cin >> a >> b; 
    int c; 
    for(int i = n; i>1; i--) 
    { 
        c = b-a; 
        b = a; 
        a = c; 
    } 
    cout << a<< " " << b ; 
    return 0; 
} 
