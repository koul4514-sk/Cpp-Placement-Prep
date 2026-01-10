#include <iostream>
using namespace std;
int main(){
   
            

    for(int i=1;i<=4;i++){
         
        int k=i;
        
        for(int j=1;j<=i;j++){
          
            // Print decreasing numbers starting from row number

            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }





    return 0;
}
