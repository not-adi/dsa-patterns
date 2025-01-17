#include<iostream>
int main() {
    int i,j,n;
    std::cout<<"Enter the number of *'s to be printed: \n";
    std::cin>>n;
    for(i=n;i>0;i--) {
        for(j=0;j<i;j++) {
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}