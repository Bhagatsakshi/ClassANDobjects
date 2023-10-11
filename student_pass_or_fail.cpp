#include<iostream>
using namespace std;
class analysis
{
int id;
int res;
public:
void setData(int sid,int sres)
{
    id=sid;
    res=sres;
}
void display()
{
    cout<<"\t"<<id<<"\t"<<res<<"\n";
}
};
int main()
{
    analysis a[10];
    int i;
    int sres,sid;
    int pass=0;
    int fail=0;
    for(i=0;i<10;i++)
{
       cout<<"enter student id :";
       cin>>sid;
       cout<<"enter 1 for pass and 2 for fail";
        cin>>sres;
        if(sres==1)
            pass++;
        else
           fail++;
        a[i].setData(sid,sres);
 }
    cout<<"\tID"<<"result\n";
    for(i=0;i<10;i++)
        {
            a[i].display();
        }
    cout<<"\tNo of passed student"<<pass;
    cout<<"\tNo of fail student"<<fail;
    if(pass>8)
       cout<<"\nRaise Tution..!";
    return 0;
}
