#include <iostream>
using namespace std;
int main(){
   
            

    for(int i=1;i<=4;i++){
        
      // k starts from row number and increases in the same row

        int k=i;
        
        for(int j=1;j<=i;j++){
            
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }





    return 0;
}
