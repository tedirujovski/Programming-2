#include <iostream>
#include <map>

using namespace std;
void arr()
{
    int sum=0;
    map<string,int>map1;
    map1["Bulgaria"]=7000000;
    map1["China"]=1000000000;
    map1["Russia"]=500000000;
    map1["Mexico"]=50000000;
    map1["Germany"]=50000000;
    map<string,int>::iterator it;
    it=map1.begin();
    while(it!=map1.end())
    {
        cout<<it->first<<"-"<<it->second<<endl;
        sum=sum+it->second;
        it++;
    }
    cout<<"sum="<<sum;
}
void arr2()
{
    string song,singer;
    map<string,string>map2;
    cin>>song;
    cin>>singer;
    map2[song]=singer;
    cin>>song;
    cin>>singer;
    map2[song]=singer;
    cin>>song;
    cin>>singer;
    map2[song]=singer;
    cin>>song;
    cin>>singer;
    map2[song]=singer;
    cin>>song;
    cin>>singer;
    map2[song]=singer;
    map<string,string>::iterator iter;
    iter=map2.begin();
    while(iter!=map2.end())
    {
        cout<<iter->first<<"-"<<iter->second<<endl;
        iter++;
    }
}

int main()
{
    arr();
    cout<<endl<<endl;
    arr2();
}
