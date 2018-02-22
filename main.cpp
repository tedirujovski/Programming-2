#include <iostream>
#include <list>

using namespace std;
void numbers()
{
    list <double> nums;
    nums.push_back(4.3);
    nums.push_back(5.6);
    nums.push_front(2.2);
    nums.push_front(1.9);
    list<double>::iterator it;
    it=nums.begin();
    it++;
    it++;
    nums.insert(it,3.5);
    while(it!=nums.end())
    {
        cout<<*it<<" ";
        it++;
    }
}

int main()
{
   numbers();
}
