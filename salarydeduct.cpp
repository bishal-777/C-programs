/*Program that deducts 10% income tax from salary of the employee*/
#include<iostream>

inline double net(double s){
    double ns;
    ns=s-(s/10);
    return ns;
}

using namespace std;

int main(){
    double s,ns;
    cout<<"Enter the salary"<<'\n';
    cin>>s;
    ns=net(s);
    cout<<"Net salary after 10% income tax="<<ns;
    return 0;
}