package com.shantanu.assignment;

import java.util.Scanner;

public class Vowels7 {

	public static void main(String[] args) {
		System.out.println("Enter Any Alphabet");
		Scanner scanner=new Scanner(System.in);
		char ch=scanner.next().toLowerCase().charAt(0);
		if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u') {
			System.out.println("You have Entered Vowel");
		}
		else {
			System.out.println("You have entered Consonant");
		}
	}
}
