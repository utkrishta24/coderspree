#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<"\t";
        }
        for(int j=i;j>0;j--){
            cout<<"*\t";
        }
        cout<<endl;
    }
     return 0;
    
}