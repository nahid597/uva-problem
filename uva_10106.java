
import java.math.BigInteger;
import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		BigInteger x,y;
		
		Scanner input = new Scanner(System.in);
		
		while(input.hasNext())
		{
			x = input.nextBigInteger();
			y = input.nextBigInteger();
			
			System.out.println(x.multiply(y));
			
		}

	}

}
