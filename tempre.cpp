#include<iostream>

using namespace std;

class temperature{
    public:
    int c,f;

    void temp_c2f()
        {
            f = (9/5)*c + 32;
            cout<<"The temperature in farenheit is:"<<f<<endl;
        }
};

int main()
    {
        temperature t1;
        cout<<"Enter temperature in centigrade"<<endl;
        cin>>t1.c;
        t1.temp_c2f();
        return 0;
    }
