#include <iostream>

using namespace std;
string nums(float num[], float x)
{
    string a="Yes!";
    string b="Not found!";

    bool flag=false;
    for(int i=0;i<5;i++)
    {
        if(x==num[i])
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        return a;
    }else{

        return b;
    }
}

int main()
{
    float num[5];
    num[0]=1.5;
    num[1]=2.3;
    num[2]=4.5;
    num[3]=7.7;
    num[4]=9.1;
    float x;
    cout<<"X=";
    cin>>x;
    cout<<nums(num,x);
}
