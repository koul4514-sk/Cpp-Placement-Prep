class Solution {
public:
    int subtractProductAndSum(int n) {

    
    int a=n;
    int j=n;
    int i=1;
    while(a!=0){
        
        i=i*(a%10);
        a=a/10;
    }
    int k=0;
    while(j!=0){
        k=k+(j%10);
        j=j/10;
        
       
     
    }
    return i-k;
    }
    
};
