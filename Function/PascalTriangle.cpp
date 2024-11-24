#include <iostream>
using namespace std;
    int fact(int n){
        int store=1;
        for(int i=1; i<=n; i++){
            store*=i;
        }
        return store;
    }
 void pascal(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<=i; j++){
           
            int conAndPer = fact(i) / (fact(j) * fact(i - j));
            cout << conAndPer<<" ";
        }
        cout<<endl;
    }
 }
int main()
{
    int n ;
    cout << "Enter the number : " << endl;
    cin >> n;

     pascal(n);
    return 0;
}