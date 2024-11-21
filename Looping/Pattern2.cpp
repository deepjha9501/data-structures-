#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;
    int a=1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(a<=n) {
             for(int j=1; j<=i; j++){
            cout<<"* ";
         }
        }
        else{
             for(int k=2*n-1; k>=i; k--){
            cout<<"* ";
         }
        }
        a++;
         cout<<endl;
    }
    
}


// Enter the Input : 
// 6
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * 