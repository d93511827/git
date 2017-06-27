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
    
    ~Str(){
        delete [] s;
    };
public:

    Str(const Str & rhs){
        this->len = rhs.len;
        this->s = new char[this->len];
        for(size_t i=0;i<this->len;++i){
            (*this).s[i]=rhs.s[i];
        }
       
    }
    
    // 重載賦值符號
   void operator=(Str const  & rhs){
        this->len = rhs.len;
        this->s = new char[this->len];
        for(size_t i=0;i<this->len;++i){
            (*this).s[i]=rhs.s[i];
        }
        //return (*this);
   }
   
   char & operator[](size_t idx){
        return s[idx];
   }
   void resize(size_t a){
        this->len=a;
        this->s=new char[this->len];
        for(size_t i=0;i<a;++i){
            this->s[i]=i+65;
        }
   }
   Str operator+=(Str const &rhs){
        size_t qq=this->len;
        char* q=(*this).s;
        char* q2=new char[rhs.len];
        for(size_t i=0;i<rhs.len;++i){
            q2[i]=rhs.s[i];
        }
        
        this->len=this->len+rhs.len;
        this->s=new char[this->len+1];
        for(size_t i=0;i<qq;++i){
            (*this).s[i]=q[i];
        }
        for(size_t i=0;i<rhs.len;++i){
            (*this).s[i+qq]=q2[i];
        }
       // delete [] q;
        return *this;
   }
   Str operator+=(const char* rhs){
   	strcat(this->s,rhs);
   	// strcat(this->s,"\0");
   	cout<<this->s<<endl;
   	return *this;
   }
   Str operator+=(const char rhs){
        


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
    friend ostream &operator<<(ostream &s, Str p); 
private:
    size_t len;
    char* s;
};
Str operator+(Str const &lhs, Str const &rhs){
    return Str(lhs)+=rhs;
}
ostream &operator<<(ostream &q, Str  b) { 
    q<<"pri s="<<b.s<<endl;
    return q; 
} 
//================================================================
int main(int argc, char const *argv[]){
    Str a="Hello World!";
    Str b=a;
    b.pri("b");
    Str c;
    b+=b;


    b.pri("b");
    c = a+b; // c is "Hello World！" x2
    c.pri("c");
    // print "Hello World！" x2
    for (int i = 0; i < c.size(); ++i){
        c[i]=i+65;
    };
    c.pri();
    cout << endl;
    c.resize(3);
    c.pri();
    cout<<endl;
    cout<<c<<endl;
    c+="asdf";
    cout<<c;
    c+='c';
    // const Str& d=c;
    

    return 0;
}
//================================================================
