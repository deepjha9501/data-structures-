// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : "<<endl;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for (int j = 1; j <= 2*n; j++)
//         {
//             if(i==j || i+j==2*n) cout<<"* ";
//             else cout<<"  ";
//         }
        
//         cout<<endl;
//     }
    
    
// }



#include<iostream>
using namespace std;
int main(){
    int n ,m;
    cout<<"Enter the Input : "<<endl;
    cin>>n>>m;

    for(int i=1; i<2*m; i++){
        for (int j = 1; j <= n+1; j++)
        {
            if(i+j==n-1 || j-i==n/2|| i-j==n/2 || i+j==m+n+1) cout<<"* ";
            else cout<<"  ";
        }
        
        cout<<endl;
    }
    
    
}
