#include<iostream>

int Sum_chuso(int n);

main(){
    int n;
    std::cin >> n;
    std::cout << Sum_chuso(n);
}

int Sum_chuso(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + Sum_chuso(n/10);
}
