#include <iostream>
using namespace std;
class hero
{
    int m;
    int n;
    public:
    int getm()
    {
        return m;
    }
    int getn()
    {
        return n;
    }
    void setm(int a)
    {
        m=a;
    }
    void setn(int b)
    {
        n=b;
    }
};
int main()
{
    hero h;
    h.setm(90);
    h.setn(45);

    cout<<h.getm()<<endl<<h.getn();
}
