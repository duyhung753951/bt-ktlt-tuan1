#include<iostream>
using namespace std;

void input_arr(int n, int a[]);
bool check_sort_up(int n, int a[]);
bool check_sort_down(int n, int a[]);
void check(int n, int a[]);
main(){
    int n;
    cin >> n;
    int a[n];
    input_arr(n, a);
    check(n, a);
}

void input_arr(int n, int a[]){
    for(int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
bool check_sort_up(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] <= a[i+1]){
            count++;
        }
    }
    if(count == n-1){
        return true;
    }else{
        return false;
    }
}
bool check_sort_down(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] >= a[i+1]){
            count++;
        }
    }
    if(count == n-1){
        return true;
    }else{
        return false;
    }
}
void check(int n, int a[]){
    if(check_sort_up(n, a)){
        cout << "Day da duoc sap xep tang dan";
    }else if(check_sort_down(n, a)){
        cout << "Day da duoc sap xep giam dan";
    }else{
        cout << "Day khong tang khong giam";
    }
}
