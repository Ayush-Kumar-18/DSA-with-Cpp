#include<iostream>
#include<cmath>
using namespace std;

bool checkP(int n){

    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    cout<< checkP(n);
    return 0;
}