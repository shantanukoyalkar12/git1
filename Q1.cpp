#include<bits/stdc++.h>
using namespace std;

class Person{
	int age;
	string name,city;
	public:
		Person(){
			cout<<"Name:NULL"<<endl;
			cout<<"Age:NULL"<<endl;
			cout<<"Ciyt:NULL"<<endl;
		}
		
		Person(int age,string name,string city){
			this->age=age;
			this->name=name;
			this->city=city;	
		}
	
	void setAge(int age){
		this->age=age;
	}
	
	int getAge(){
		return age;
	}
	
		void setName(string name){
		this->name=name;
	}
	
	string getName(){
		return name;
	}
	
		void setCity(string city){
		this->city=city;
	}
	
	string getCity(){
		return city;
	}
	
	
	
	void display(){
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"Name: "<<name<<"  Age: "<<age<<"  city:"<<city;
 }
};
int main(){
	cout<<"----------------------parameterised constructor---------------------"<<endl;
	Person p(21,"Abhi","Nanded");
	p.display();
	cout<<"\n--------------------getter setter---------------------------------"<<endl;
	int age;
	string name,city;
	cout<<"Enter your name age city:"<<endl;
	cin>>name>>age>>city;
	p.setName(name);
	p.setAge(age);
	p.setCity(city);

	p.display();
	return 0;
}
