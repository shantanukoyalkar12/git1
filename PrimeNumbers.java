package com.shantanu.assignment;

import java.util.Scanner;

public class PrimeNumbers {
	public static void main(String[] args) {
		int num;
		do {
			System.out.println("Enter any number");
			Scanner scanner = new Scanner(System.in);
			num = scanner.nextInt();
			boolean flag = false;
			for (int i = 2; i < num; i++) {
				if (num % i == 0) {
					flag = false;
					break;
				} else {
					flag = true;
				}
			}
			if (flag == true) {
				System.out.println("prime");
			} else {
				System.out.println("Not Prime");
			}
		} while (num != 0);
	}
}
