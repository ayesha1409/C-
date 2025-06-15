#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    int root=sqrt (num);
    if(root * root==num)
        cout<<"Perfect Square";
    else
        cout<<"Not a perfect square";
}

