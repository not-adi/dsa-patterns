#include<iostream>
int main() {
    int i,j,n;
    std::cout<<"Enter the no of *: \n";
    std::cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}