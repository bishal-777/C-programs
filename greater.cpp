/*Greater between two numbers*/
#include<iostream>

//Not using namespace std in order to eliminate naming conflicts;

class greater{
    public:
    int g,n1,n2;

    int greatest(int n1,int n2){
    g=n1>n2?n1:n2;
    return g;
    }
};

int main(){
    greater g1;
    //int great;
    std::cout<<"Enter any two numbers:"<<'\n';
    std::cin>>g1.n1>>g1.n2;
    std::cout<<"Greater number="<<g1.greatest(g1.n1,g1.n2);
    return 0;
}
