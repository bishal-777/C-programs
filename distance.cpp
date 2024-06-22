/*Distance between two points*/
#include<iostream>

//Not using "using namespace std" in order to eliminate name conflicts;

class distance{
    public:
    int d,p1,p2;

    void p1top2(){
        d=p2-p1;
        std::cout<<"Distance="<<d<<'\n';
    }
};

int main(){
    distance d1;
    std::cout<<"Enter the initial and final point:"<<'\n';
    std::cin>>d1.p1>>d1.p2;
    d1.p1top2();
    return 0;
}
