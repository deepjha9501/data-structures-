#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int alph =int('A');
        for(int k=n; k>i; k--) cout<<" ";
         for(int j=1; j<=i; j++){
            char ch=char(alph);
             cout<<ch<<" "; 
           
            alph++;
         }
         cout<<endl;
    }
    
}
