package com.shantanu.assignment;

public class PizzaShop {
	int id;
	int number;
	int total;
	String name;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public int getNumber() {
		return number;
	}
	public void setNumber(int number) {
		this.number = number;
	}
	public int getTotal() {
		return total;
	}
	public void setTotal(int total) {
		this.total = total;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public PizzaShop(int id, int number, int total, String name) {
		super();
		this.id=id;
		this.number = number;
		this.total = total;
		this.name = name;
	}
	
	public PizzaShop() {
		super();
		
	}
	@Override
	public String toString() {
		return "PizzaShop [price=" + id + ", number=" + number + ", total=" + total + ", name=" + name + "]";
	}
	public int totaLPrice(int total,int number) {
		int price=number*total;
		return price;
	}
	
}
