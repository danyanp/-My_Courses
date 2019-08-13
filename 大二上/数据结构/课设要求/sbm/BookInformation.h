/**
*出版社图书信息
*
**/
#include<iostream>
#include<fstream> 
#include<stddef.h>
#include<cstring>
using namespace std;
//出版社图书信息数据对象集ADT

class BookInformation{
	private:
		//序号 
		int Xnumber;
		//本季征订号
		int Dnumber;
		//分册
		string Fascicle[10];
		//出版机构
		string Porganization;
		//ISBN
		long int ISBN;
		//书名
		string BookName[10];
		//获奖项目
		string Winproject[10];
		//著作者
		string Author[10];
		//适用分级
		string Grade[10];
		//价格
		float Price;
		//本版版次
		string Edition[10];
		//出版年月
		string EditionYear[10];
		//社内分类
		string Classification[10];
	public:
		BookInformation();
		~BookInformation();
		//操作集
		
		//增加
		void BookAdd(); 
		//删除
        void BookDelete();
        //插入
        void BookInsert();
        //查询 
		void BookRetrieve();
		
};
BookInformation::BookInformation(){
	cout <<"我是构造函数"<<endl; 
	ifstream fin("books2018.txt");
	if(!fin){
		cout <<"error"<<endl; 
	}else{
		cout << "yes"<<endl;
	}
}
