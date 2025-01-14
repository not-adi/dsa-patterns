#include<iostream>
int main() {
    int i,j,m,n;
    std::cout<<"Enter the no of rows: \n";
    std::cin>>m;
    std::cout<<"Enter the no of columns: \n";
    std::cin>>n;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}