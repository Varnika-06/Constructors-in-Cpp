//Name: Varnika Maurya
//PRN: 24070123160
//Exp No.: 12
//Program No.: 3
#include<iostream>
using namespace std;
class Num{
    public:
    Num(int c, int d){
        if(c>d){
            cout<<c<<" is greater";
        }
        else{
            cout<<d<<" is greater";
        }
    }
};
int main(){
    Num n1(4,3);
}
/*
4 is greater
*/
