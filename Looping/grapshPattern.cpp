#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;
    char ch='A';
    for (int i = 0; i < 2*n-1; i++)
    {
        cout<<ch++;
    }
    cout<<endl;
    int a=1;
    for(int i=1; i<n; i++){
        ch='A';
        for(int j=n;j>i; j--) cout<<ch++;
        for(int j=1; j<=a; j++) {
            cout<<" ";
            ch++;
            
        }
        for(int j=n;j>i; j--) cout<<ch++;
        a=a+2;
        cout<<endl;
    }
    
    
}
