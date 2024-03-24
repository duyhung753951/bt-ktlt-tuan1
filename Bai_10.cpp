#include<iostream>
#include<math.h>
bool Armstrong_check(int n);

main(){
    int n;
    std::cin >> n;
    if(Armstrong_check(n) == true){
        std::cout << n << " la so Armstrong.";
    }else{
        std::cout << n << " khong phai so Armstrong.";
    }
}

bool Armstrong_check(int n){
    int sum = 0, x;
    int copy_of_n = n, count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    n = copy_of_n;
    while(n != 0){
        x = n % 10;
        sum += pow(x, count);
        n = n/10;
    }
    if(copy_of_n == sum){
        return true;
    }else{
        return false;
    }
}
