#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int alph =int('A');
         for(int j=1; j<=i; j++){
            char ch=char(alph);
            if(i%2==0) cout<<ch<<" "; 
            else cout<<j<<" ";
            alph++;
         }
         cout<<endl;
    }
    
}

//if give the input 5 than output is :
// 1 
// A B 
// 1 2 3 
// A B C D
// 1 2 3 4 5