package com.shantanu.assignment;

import java.util.Scanner;

public class TriangleValidity8 {
   public static void main(String[] args) {
	System.out.println("Enter Angle first ");
	Scanner scanner=new Scanner(System.in);
	int angle1=scanner.nextInt();
	System.out.println("Enter Angle second ");
	int angle2=scanner.nextInt();
	System.out.println("Enter Angle third ");
	int angle3=scanner.nextInt();
	if(angle1+angle2+angle3==180) {
		System.out.println("Its a Triangle");
	}else {
		System.out.println("Not a triangle");
	}
}
}
