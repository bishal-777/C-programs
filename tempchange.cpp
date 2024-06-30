/*Use of function that passes two temperatures by reference and sets the larger
of the two numbers to 100 by using return by reference.*/
#include<iostream>

 void temp(int*,int*);
using namespace std;
int main(){
    int t1,t2;
    cout<<"Enter two temperatures:"<<endl;
    cin>>t1>>t2;
    cout<<"Before changing:First Temperature="<<t1<<"First Temperature="<<t2<<endl;
    temp(&t1,&t2);
    cout<<"After changing:First Temperature="<<t1<<"First Temperature="<<t2<<endl;
    return 0;
}
void temp(int *t1,int *t2){
    int t;
    if(*t1>*t2){
        *t1=100;
    }
    else{
        *t2=100;
    }

}