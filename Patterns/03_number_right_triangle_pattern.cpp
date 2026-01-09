#include<iostream>
using namespace std;
int main(){
    int i =1;
    while(i<=4){
        int j=1;
         // Logic is similar to right triangle star pattern

        while(j<=i){
           
           
        // Only difference is printing the row number instead of '*'

            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
