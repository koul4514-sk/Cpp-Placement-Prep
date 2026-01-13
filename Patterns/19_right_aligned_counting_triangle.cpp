#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number: ";
    int count =1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
         for(int k=n-i;k<n;k++){
           cout<<count;
           count++;
        }
      
        cout<<endl;
    }
    return 0;
}
