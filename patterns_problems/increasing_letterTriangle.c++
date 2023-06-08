#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int num=1;
    for(int i=0;i<n;i++){
        //to print a alphabets
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern(n);
    
    return 0;
}
/*
5

1
23
456
78910
*/
