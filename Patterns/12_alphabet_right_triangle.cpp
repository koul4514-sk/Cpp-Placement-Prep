#include <iostream>
using namespace std;

int main() {
    for (int i=0;i<3;i++){
        
        for(int j=0;j<=i;j++){
             //Typecasting 
             // Another way is creating char ch='A'+i
             cout<<(char)('A'+i)<<" ";
             // char('A' + i) = (char)('A'+i)
        }
        cout<<endl;
       

    }

  return 0;
}
