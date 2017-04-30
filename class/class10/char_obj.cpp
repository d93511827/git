/*****************************************************************
Name : 
Date : 2017/04/27
By   : CharlotteHonG
Final: 2017/04/27
*****************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

class Str{
public:
    Str(const char* str) {
        cout <<"str="<<str<<endl;
        len=strlen(str);
        cout<<len;
        s=new char[len];
        for(size_t i=0;i<len;++i){
            s[i]=str[i];
        }
        cout<<s<<endl;
    }
    Str(size_t len=0): len(len), s(new char[len]){
        // 初始化資源
        
    }
    
    //~Str();
public:
    Str(const Str & rhs){
        this->len = rhs.len;
        this->s = new char[this->len];
        for(size_t i=0;i<this->len;++i){
            (*this).s[i]=rhs.s[i];
        }
       
    }
    
    // 重載賦值符號
   void operator=(const Str & rhs){
        this->len = rhs.len;
        this->s = new char[this->len];
        for(size_t i=0;i<this->len;++i){
            (*this).s[i]=rhs.s[i];
        }
        //return (*this);
   }
  /* char operator+(Str const &lhs, Str const &rhs){
        return 
   }*/
   char operator[](size_t idx){
        return this->s[idx];
   }
   void operator=(const char & rhs){
        this->s[len]=rhs;
   }
   Str operator+=(Str const &rhs){
        size_t qq=this->len;
        char* q=new char[this->len];
            q=(*this).s;
        
        this->len=this->len+rhs.len;
        this->s=new char[this->len];
        this->s=q;
        for(size_t i=0;i<rhs.len;++i){
            (*this).s[i+qq]=rhs.s[i];
        }
        return *this;
   }
   int size(){
        return len;
   }
   void pri(string name=""){
        if(name != "")
            cout << name << " = ";
        for(unsigned i = 0; i < this->len; ++i) {
            cout << (*this).s[i] ;
        } cout << endl;
        
    }
private:
    size_t len;
    char* s;
};
Str operator+(Str const &lhs, Str const &rhs){
    return Str(lhs)+=rhs;
}
//================================================================
int main(int argc, char const *argv[]){
    Str a="Hello World!";
    Str b=a;
    b.pri("b");
    Str c;
    b+=a;
    b.pri("b");
    c = a+b; // c is "Hello World！" x2
    c.pri("c");
    // print "Hello World！" x2
    for (int i = 0; i < c.size(); ++i){
        c[i]="1";
    }c+="\n\0";
    cout << endl;
    

    return 0;
}
//================================================================
