#include<iostream>
int main() {
    int i,j,n;
    std::cout<<"Enter the number of *'s to be printed in length: ";
    std::cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        if (i==0 || i==n-1 || j==0  || j==n-1) {
            std::cout<<" *";
        } else { 
            std::cout<<"  ";
        } 
    }
        std::cout<<"\n";
    }

    return 0;
}