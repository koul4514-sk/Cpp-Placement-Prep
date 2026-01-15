#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int previousnum=0;
    int currentnum=1;
    
    for(int i=0;i<n;i++){
        int nextnum;
        nextnum=previousnum+currentnum;
        cout<<nextnum<<" ";
        previousnum=currentnum;
        currentnum=nextnum;
    }
    return 0;
}
