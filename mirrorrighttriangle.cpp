#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=n;i>0;i--) {
        for(j=n;j>0;j--) {
            if(j<=i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
         cout<<"\n";
    }
    return 0;
}