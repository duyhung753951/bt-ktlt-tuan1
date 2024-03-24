#include<iostream>

using namespace std;

int Sum_of_Factorial(int n);

main(){
	int n;
	scanf("%d", &n);
	Sum_of_Factorial(n);
}

int Sum_of_Factorial(int n){
    int gt = 1, S = 0;
    for(int i = 1; i <= n; i++){
        gt *= i;
        S += gt;
    }
    cout << S;
    return 0;
}
