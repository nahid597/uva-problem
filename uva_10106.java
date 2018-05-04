package ru.ac.bd;

import java.math.BigInteger;
import java.util.*;

public class uva_10106 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		BigInteger x,y;
		
		Scanner input = new Scanner(System.in);
		
		while(input.hasNextInt())
		{
			x = input.nextBigInteger();
			y = input.nextBigInteger();
			
			System.out.println(x.multiply(y));
			
		}

	}

}
