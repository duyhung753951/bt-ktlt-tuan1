#include<iostream>
//fn = fn-1 + fn-2

int Fib(int n);

main(){
    int n;
    std::cin >> n;
    std::cout << Fib(n);
}

int Fib(int n){
    if(n <= 1){
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}
