/*****************************************************************
Name : 
Date : 2017/07/04
By   : CharlotteHonG
Final: 2017/07/04
*****************************************************************/
#include <iostream>
class num_error : public std::runtime_error {
public:
    num_error(const std::string& str): std::runtime_error(str) {}
};
int ma(unsigned int a){
    if (a>12){
        throw num_error("number too big");
    }
    else{
        if(a==0){
            return 1;
        }
        else if(a==1){
            return 1;
        }
        else{
            return a*ma(a-1);
        }
    }
}

using namespace std;
//================================================================
int main(int argc, char const *argv[]){
    for(unsigned i=0;i<14;i++){
        try{
            cout<<i<<"!:\t"<<ma(i)<<endl;
        }
        catch(num_error a){
            cout<<a.what();
        }

    }
    return 0;
}
//================================================================
