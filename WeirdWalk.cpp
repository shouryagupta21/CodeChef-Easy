#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,WalkCount=0;
        cin>>n;
        long long int A[n],B[n],sumA=0,sumB=0;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        for(int i=0; i<n; i++){
            cin>>B[i];
        }
        for(int i=0; i<n; i++){
            sumA=sumA+A[i];
            sumB=sumB+B[i];
            if(A[i]==B[i]){
                if(sumA==sumB){
                    WalkCount=WalkCount+A[i];
                }
            }
        }
        cout<<WalkCount<<endl;
    }
}
