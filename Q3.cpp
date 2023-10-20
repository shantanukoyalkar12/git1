#include<iostream>
using namespace std;

class Book{
	int bookId,price;
	string auth,bName;
	public:
		Book(){
		cout<<"bookId:null"<<endl<<"Book Name: null"<<endl<<"Author Name: null"<<endl<<"price: null"<<endl<<"Author Name: null";	
		}
		
		Book(int bookId,int price,string auth,string bName){
			this->bookId=bookId;
			this->auth=auth;
			this->bName=bName;
			this->price=price;
		}
		
		void setBookId(int bookId){
				this->bookId=bookId;
		}
		
		int getBookId(){
			return bookId;
		}
		
		void setPrice(int price){
				this->price=price;
		}
		int getPrice(){
			return price;
		}
		
		void setBookName(string bName){
			this->bName=bName;
		}
		
		string getBookName(){
			return bName;
		}
		
		void setAuth(string auth){
			this->auth=auth;
		}
		string getAuth(){
			return auth;
		}
		void setData(){
		
		}
		void display(){
		
cout<<"BookId: "<<bookId<<"   Book Name: "<<bName<<"   Author Name: "<<auth<<"   Price: "<<price;
	}
};

int main(){
	cout<<"----------------------parameterised constructor---------------------"<<endl;
	Book b(101,1000,"c++","E balaguruswami");
	b.display();
	int id,pr;
	string bnm,authnm;
	cout<<"\n------------------------------------------------------------------\n";
	cout<<"\nEnter bookId bookprice bookname bookauthor:"<<endl;
	cin>>id>>pr>>bnm>>authnm;
	b.setBookId(id);
	b.setBookName(bnm);
	b.setAuth(authnm);
	b.setPrice(pr);
	cout<<"Book Name: "<<b.getBookName()<<"    Book Id: "<<b.getBookId()<<"   Author Name: "<<b.getAuth()<<"    Price: "<<b.getPrice();
	return 0;
	
}
