#include<iostream>
#include<math.h>
using namespace std;

int Factorial(int n);

main(){
	int n;
    float x, s = 0;
	cin >> n >> x;
    for(int i = 0; i <= n; i++){
        s += (pow(-1, i) * pow(x, 2*i+1)) / Factorial(2*i+1);
    }
    cout << s;
}

int Factorial(int n){
    int gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
    }
    return gt;    
}
