#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter the number: \n";
    cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<i+1;j++) {
            cout<<j+1;
        } cout<<"\n";
    } return 0;
}