#include<iostream>
using namespace std;
int main(){

    int a=5,b=true,c=2;
    int sum=a+c;
    std::cout<<sum<<std::endl;// 7
    
    bool condition= !b; // false/0
    std::cout<<condition<<std::endl;

    int leftshit= a<<c; // 20
    std::cout<<leftshit<<std::endl;


    return 0;
}