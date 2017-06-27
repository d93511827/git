/*****************************************************************
Name : 
Date : 2017/06/27
By   : Username
Final: 2017/06/27
*****************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
class open_error : public std::runtime_error {
public:
	open_error(const std::string& str): std::runtime_error(str) {}
};
void openfi(fstream &fil){
	fil.open("tr.txt",ios::in);
	if(!fil){
		throw open_error("open error");
	}
	else{
		fil.close();
		fil.open("tr.txt",ios::out);
	}

}
void openerrorfi(fstream &fil){
	fil.open("tr1.txt",ios::in);
	if(!fil){
		throw open_error("open error");
	}
}
void newfi(fstream &fil,char *name){
	fil.open(name,ios::out);
}
/*==============================================================*/
int main(int argc, char const *argv[]){
	fstream fp1,fp2,fil;
	char *name=new char [10];
	char *std=new char[100];
	try{
		openfi(fp1);
	}
	catch(open_error a){
		cout<<"fp1_"<<a.what()<<endl;
		cout<<"file name:";
		cin>>name;
		newfi(fp1,name);
	}
	cout<<"fp1 data wirte:";
	cin>>std;
	fp1<<std;
	fp1.close();
	try{
		openerrorfi(fp2);
	}
	catch(open_error a){
		cout<<"fp2_"<<a.what()<<endl;
		cout<<"file name:";
		cin>>name;
		newfi(fp2,name);
	}
	cout<<"fp2 data wirte:";
	cin>>std;
	fp2<<std;
	fp2.close();
	return 0;
}
/*==============================================================*/