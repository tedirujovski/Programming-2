#include <iostream>
#include <list>;

using namespace std;
void nums()
{
    int sum=0;
    list <int>number;
    number.push_front(3);
    number.push_front(1);
    number.push_back(5);
    number.push_back(7);
    list<int>::iterator it;
    it = number.begin();
    for(int i=0;i<=3;i++)
    {
        cout<<*it<<" ";
        sum=sum+*it;
        it++;
    }
    cout<<"sum="<<sum;
}

int main()
{
    nums();
}
