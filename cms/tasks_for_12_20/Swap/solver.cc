#include <iostream> 
using namespace std; 

int main() 
{ 
    int i; 
    cin >> i; 
    int j = i/100 % 10; 
    int b = i/10 % 10; 

    cout << i/1000 << b << j << i%10; 
    return 0; 
} 
