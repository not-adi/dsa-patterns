#include <iostream>
int main() {
    int m,i,j;
    std::cout<<"Enter the number of *: \n";
    std::cin>>m;
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}