#include<iostream>
#include<math.h>
using namespace std;


main(){
    for(int dung = 1; dung < 100; dung++){
        for(int nam = 1; nam < 100; nam++){
            for(int gia = 1; gia < 100; gia++){
                if((dung*15 + nam*9 + gia) == 300 && (dung + nam + gia) == 100){
                    cout << "Trau dung = " << dung << endl;
                    cout << "Trau nam = " << nam << endl;
                    cout << "Trau gia = " << gia << endl;
                    cout << endl;
                }
            }
        }
    }
}
