/*WAP to find the sum and average of the number by using new and delete operator. Also use static_cast casting operator.*/
#include<iostream>

void sumavg(int);
using namespace std;
int main(){
    int n,i,num[20],sum=0;
    cout<<"How many numbers you want to enter?"<<endl;
    cin>>n;
    sumavg(n);
    return 0;
}
void sumavg(int n){
    int i,*ptr,sum=0;
    float average;
    ptr=new int[n];
    for(i=0;i<n;i++){
        cout<<"Enter element"<<endl;
        cin>>ptr[i];
        sum+=ptr[i];
    }
    average=static_cast<float>(sum)/static_cast<float>(n);
    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<average<<endl;
    delete []ptr;
}