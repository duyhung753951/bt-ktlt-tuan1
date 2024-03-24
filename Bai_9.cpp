#include<iostream>
#include<math.h>
bool Armstrong_check(int n);

main(){
    for(int i = 100; i <= 999; i++){
        if(Armstrong_check(i) == true){
            std::cout << i << " ";
        }
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
