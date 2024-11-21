#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;
    int a=1;
    for (int i = 1; i <=n; i++)
    {
        int alph =int('A');
        for(int k=n; k>i; k--) cout<<"  ";
         
          for(int k=1; k<i; k++){
            char ch =char(alph+(i-1));
                cout<<ch<<" ";
                alph--;
          }
           alph=int('A');
          for(int l=1; l<=i; l++){
            char ch =char(alph);
                cout<<ch<<" ";
                alph++;
          }
          
         cout<<endl;
    }
    
}
