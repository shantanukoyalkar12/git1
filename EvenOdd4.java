package com.shantanu.assignment;

import java.util.Scanner;

public class EvenOdd4 {

	public static void main(String[] args) {
		int a;
		do {
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter number");
			a=sc.nextInt();
			if(a%2==0) {
				System.out.println("Number :"+a+" is Even");
			}
			else {
				System.out.println("Number :"+a+" is Odd");
			}
			
		}while(a!=0);
	}

}
