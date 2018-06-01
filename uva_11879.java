package ru.ac.bd;

import java.util.*;
import java.math.*;

public class uva_11879 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner input = new Scanner(System.in);
		
		BigInteger a, b, sum,n,d,sub,div;
		
		for(; ;)
		{
			n = input.nextBigInteger();
			
			if( n.equals(BigInteger.ZERO))
				break;
			
			a = n.remainder(BigInteger.TEN);
			n = n.divide(BigInteger.TEN);
			
			d = a.multiply(BigInteger.valueOf(5));
			
			sub = n.subtract(d); 
			
			div = sub.remainder(BigInteger.valueOf(17));
			
			
			if(div.equals(BigInteger.valueOf(0)))
				System.out.println("1");
			else
				System.out.println("0");
				
			
			
		}

	}

}
