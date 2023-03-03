#include<iostream>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;

    int X=0;
    while(n--){
        string Xstr;
        cin>>Xstr;
        if(Xstr=="X++" || Xstr=="++X"){
            X++;
        }
        else{
            X--;
        }
    }
    cout<<X;
 
    return 0;
}