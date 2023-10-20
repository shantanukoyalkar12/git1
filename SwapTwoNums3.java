package com.shantanu.assignment;

import java.util.Scanner;

public class SwapTwoNums3 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter first number");
		int a=sc.nextInt();
		System.out.println("Enter Second number");
		int b=sc.nextInt();
		System.out.println("Number before Swapping a:"+a+" b:"+b);
		int temp=a;
		a=b;
		b=temp;
		System.out.println("Number after Swapping a:"+a+" b:"+b);
	}
}
