#include<iostream>
using namespace std;
int main(){
    char store='A';
    for(int i=1;i<=3;i++){
      //store++ can also be put after second loop
        if(i!=1){
        store++;
        }
        for(int j=1;j<=3;j++){
            cout<<store<<" ";
        }
        cout<<endl;
    }



    return 0;
}
