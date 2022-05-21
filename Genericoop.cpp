#include<iostream>
using namespace std;
template<class T>
class Arithematic
{
    public:
    T No1,No2;
    Arithematic(T a,T b)
    {
        No1=a;

        No2=b;
    }
    T Addition()
        {
            T ans=0;
            ans=No1+No2;
            return ans;

        }
        T Sub()
        {
            T ans=0;
            ans=No1-No2;
            return ans;

        }
    
};

int main()
{

    int iobj;
    Arithematic<int> iobj(10,11);
    int ret= iobj.Addition();

   
    return 0;
}