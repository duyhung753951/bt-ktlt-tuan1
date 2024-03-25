#include<iostream>
//fn = fn-1 + fn-2

int Fib(int n);

main(){
    int n;
    std::cin >> n;
    for(int i = 0; i <=n; i++){
        if(Fib(i) <= n){
            std::cout << Fib(i) << " ";
        }else{
            break;
        }
    }
}
int Fib(int n){
    if(n <= 1){
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}
