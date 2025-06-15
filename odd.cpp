#include <iostream>
using namespace std;


int main(){
    int n,m,sum=0;
    cin>> m>> n;
    for(int i=m;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
            cout<< "sum" <<sum;
        }
    }
}