#include <iostream>
#include <set>
using namespace std;

int main()
{

    multiset<int> mst;
    mst.insert(0);
    mst.insert(1);
    mst.insert(50);
    mst.insert(14);
    mst.insert(4);
    multiset<int>::iterator p=mst.begin();
    for(int i=0;i<mst.size();i++)
    {
        cout << *p << endl;
        p++;
    }
    p=mst.begin();
    p++;
    mst.erase(p);
    mst.insert(100);
    p=mst.begin();
    for(int i=0;i<mst.size();i++)
    {
        cout << *p << endl;
        p++;
    }
    return 0;
}
