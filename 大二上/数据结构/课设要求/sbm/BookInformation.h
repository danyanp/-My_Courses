/**
*������ͼ����Ϣ
*
**/
#include<iostream>
#include<fstream> 
#include<stddef.h>
#include<cstring>
using namespace std;
//������ͼ����Ϣ���ݶ���ADT

class BookInformation{
	private:
		//��� 
		int Xnumber;
		//����������
		int Dnumber;
		//�ֲ�
		string Fascicle[10];
		//�������
		string Porganization;
		//ISBN
		long int ISBN;
		//����
		string BookName[10];
		//����Ŀ
		string Winproject[10];
		//������
		string Author[10];
		//���÷ּ�
		string Grade[10];
		//�۸�
		float Price;
		//������
		string Edition[10];
		//��������
		string EditionYear[10];
		//���ڷ���
		string Classification[10];
	public:
		BookInformation();
		~BookInformation();
		//������
		
		//����
		void BookAdd(); 
		//ɾ��
        void BookDelete();
        //����
        void BookInsert();
        //��ѯ 
		void BookRetrieve();
		
};
BookInformation::BookInformation(){
	cout <<"���ǹ��캯��"<<endl; 
	ifstream fin("books2018.txt");
	if(!fin){
		cout <<"error"<<endl; 
	}else{
		cout << "yes"<<endl;
	}
}
