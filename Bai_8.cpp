#include<iostream>
#include<math.h>
bool Armstrong_check(int n);

main(){
    int n;
tryAgain:
    std::cin >> n;

    if(n < 100){
        goto tryAgain;
    }
    if(Armstrong_check(n) == true){
        std::cout << n <<" la so Armstrong.";
    }else{
        std::cout << n << " khong phai so Armstrong.";
    }
}

bool Armstrong_check(int n){
    int sum = 0, x;
    int copy_of_n = n;
    while(n != 0){
        x = n % 10;
        sum += pow(x, 3);
        n = n/10;
    }
    if(copy_of_n == sum){
        return true;
    }else{
        return false;
    }
}
