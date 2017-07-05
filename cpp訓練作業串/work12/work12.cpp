/*****************************************************************
Name : 
Date : 2017/07/05
By   : CharlotteHonG
Final: 2017/07/05
*****************************************************************/
#include <iostream>
using namespace std;
class organism{
public:
    organism(int hp,int sp,int atk):hp(hp),sp(sp),atk(atk){}
    virtual ~organism(){}
    virtual void showthis(){
        cout<<"HP="<<hp<<",SP="<<sp<<",ATK="<<atk<<endl;
    }
    int hp,sp,atk;
};
class summoner:public organism{
public:
    summoner(int hp=10,int sp=30,int atk=25,int bag=22):organism(hp,sp,atk),bag(bag){}
    int bag;
    void showthis(){
        cout<<"summoner's:HP is "<<hp<<",SP is "<<sp<<",ATK is "<<atk<<",The bag is "<<bag<<endl;    
    }
};
class monster:public organism{
public:
    monster(int hp=20,int sp=5,int atk=10):organism(hp,sp,atk){}
    void showthis(){
         cout<<"monster's:HP is "<<hp<<",SP is "<<sp<<",ATK is "<<atk<<endl;
    }
};
void showthis(organism* a){
    a->showthis();
}
//================================================================
int main(int argc, char const *argv[]){
    showthis(new summoner);
    showthis(new monster);


    return 0;
}
//================================================================
