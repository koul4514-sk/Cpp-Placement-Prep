#include<iostream>
using namespace std;
int main(){
    
   
    int count=0;
    int i=1;
    while(i<=3){
         int j=1;
         
        while(j<=3){
            count++;
            cout<<count<<" ";
            j++;

        }
        // Print newline after completing one row (inner loop).
        // If endl is placed inside the inner loop, the pattern will break
        // and numbers will be printed in separate lines.
        cout<<endl;
        i++;
        
        
    }
    

    return 0;

}
