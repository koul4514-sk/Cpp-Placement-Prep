#include <iostream>   
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int answer=0;
     int i=0;
        
    while(n!=0){
        int store=n & 1;
        
       
        answer=(store*pow(10,i)) + answer;
        n=n>>1;
        i++;
        
    }
    cout<<answer;
    return 0;
}
