package ru.ac.bd;

import java.math.*;
import java.util.*;

public class uva_713 {
	
	
	static BigInteger p;
	
	public static BigInteger reverse (BigInteger n)
	{
		BigInteger sum = BigInteger.ZERO;
		for(; ;)
		{
			if(n.equals(BigInteger.ZERO))
				break;

			p = n.remainder(BigInteger.TEN);
			n = n.divide(BigInteger.TEN);
			sum = (sum.multiply(BigInteger.TEN)).add(p);	
			
		}
		
		
		return sum;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner input = new Scanner(System.in);
		
		BigInteger a, b,sum1,t,i,r1,r2,r3;
		int p;
		p = input.nextInt();
		
		//t = input.nextBigInteger();
		
		for( i = BigInteger.valueOf(0); i.compareTo(BigInteger.valueOf(p))==-1; i = i.add(BigInteger.ONE))
		{
		     a = input.nextBigInteger();
			 b = input.nextBigInteger();
			 
			 r1 = reverse(a);
			 r2 = reverse(b);
			 
			 sum1 = r1.add(r2);
			 
			 r3 = reverse(sum1);
			 
			 
			 System.out.println(r3);
			  
		 
		}
			 	 
		
	}

}
