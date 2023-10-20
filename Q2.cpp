#include<iostream>
using namespace std;

class Date{
	int day,month,year;
	
	public:
		Date(){
			cout<<"Day:NULL"<<endl;
			cout<<"Month:NULL"<<endl;
			cout<<"Year:NULL"<<endl;
		}
		
		Date(int day,int month,int year){
			this->day=day;
			this->month=month;
			this->year=year;	
		}
	
	void setDay(int day){
		this->day=day;
	}
	
	int getDay(){
		return day;
	}
	
		void setMonth(int month){
		this->month=month;
	}
	
	int getMonth(){
		return month;
	}
	
		void setYear(int year){
		this->year=year;
	}
	
	int getYear(){
		return year;
	}
	
	void display(){
		cout<<"--------------------------------------------------------"<<endl;
	cout<<day<<"/"<<month<<"/"<<year;
	}
};
int main(){
	cout<<"----------------------parameterised constructor---------------------"<<endl;
	Date d(10,10,2001);
	d.display();
	cout<<"\n--------------------getter setter---------------------------------"<<endl;
	int a,b,c;
	cout<<"enter day month year:"<<endl;
	cin>>a>>b>>c;
	d.setDay(a);
	d.setMonth(b);
	d.setYear(c);
	cout<<"Date: "<<d.getDay()<<"/"<<d.getMonth()<<"/"<<d.getYear()<<endl;
	
	return 0;
}
