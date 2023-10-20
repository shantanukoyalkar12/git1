package com.shantanu.assignment;

import java.util.Scanner;

public class PowerOfNum10{

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		int a=sc.nextInt();
		System.out.println("Enter power number");
		int b=sc.nextInt();
		int c=1;
		//System.out.println(Math.pow(a, b));
		for(int i=1;i<=b;i++) {
			c=c*a;			
		}
		System.out.println("Your answer is: "+c);
	}
}
