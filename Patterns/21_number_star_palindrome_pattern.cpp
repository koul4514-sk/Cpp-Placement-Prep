#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
         for(int k=n;k>=1;k--){
            cout<<k;
        }
    }
    else{
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int z=1;z<=i-1;z++){
            cout<<"**";
        }
         for(int k=n-i+1;k>=1;k--){
            cout<<k;
        }
       

    } cout<<endl;
}
    return 0;
}
