#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"enter the max number: "; //5
    cin>>n; //5 
    
    int x = 0; //1  //0  //1 //1 //2
    int y = 1; //0  //1  //1 //2 //3
    int z = 0; //1  //1  //2 //3 //5
    
    while(z<=n){ // (0<=5), //(1<=5) //(1<=5) //(2<=5) //(3<=5) //(5<=5)
        cout<<z<<endl; // z= 0 //1 //1 //2 //3 //5
        x = y; //1 //0 //1 //1 //2 
        y = z; //0 //1 //1 //2 //3
        z = x+y; //z =1+0=1 // z =0+1=1 //z=1+1=2 //z=1+2=3 //z=2+3=5
    }
    return 0;
}