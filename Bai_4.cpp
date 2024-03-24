#include<iostream>
#include<math.h>
using namespace std;


main(){
    for(int ga = 0; ga <= 50; ga++){
        for(int cho = 0; cho <= 25; cho++){
            if((ga + cho == 36 ) && (2*ga + 4*cho) == 100){
                cout << "ga = "<< ga << "   " << "cho = " << cho;
            }
        }
    }
}
