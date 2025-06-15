#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=2;i<=n;i++){
        bool isprime=true;

        for( int j=2;j*j<=i;j++){
            isprime=false; 
            break;

        }
        if (isprime){
            cout<< i<< "";
        }
    }
}