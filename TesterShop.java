package com.shantanu.assignment;

import java.util.Scanner;

public class TesterShop {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		PizzaShop[] ps=new PizzaShop[5];
		int no;
		int index=0;
		
		do {
			PizzaShop pz = null;
			System.out.println("Choice 1:add pizza 2 display pizzas 3 total price 4 exit");
			no=sc.nextInt();
			switch(no) {
			case 1:
				System.out.println("See menu and select pizza no,number of pizzas,total price,name of pizza");
				pz=new PizzaShop(sc.nextInt(), sc.nextInt(), sc.nextInt(),sc.next());
				ps[index]=pz;
				index++;
				System.out.println("Pizza added succesfully");
				break;
			case 2:
				for(PizzaShop p:ps) {
					System.out.println(p);
				}
				break;
			case 3:
				System.out.println("Enter id for the bill");
				int idfind=sc.nextInt();
				for(int i=0;i<ps.length;i++) {
				if(ps[i].getId()==idfind) {
				int a=ps[i].getTotal();
				int b=ps[i].getNumber();
				System.out.println("Pizza ordered : "+ps[i].getName()+" Total Bill= "+a*b);
				break;
				}
				}
				break;
			
			}
			
		}while(no!=4);

	}

}
