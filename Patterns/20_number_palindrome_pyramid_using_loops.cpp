#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        // Print spaces
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        // Print increasing numbers
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        // Print decreasing numbers
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
