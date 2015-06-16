import java.util.*;

public class DragnXor
{
	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args)
	{
		int T = sc.nextInt();
		while(T-->0)
		{
			int n = sc.nextInt();
			int a = Integer.bitCount(sc.nextInt());
			int b = Integer.bitCount(sc.nextInt());
			
			int ones = a+b;
			if(ones>n)
				ones = n - (ones - n);
			System.err.println("Ones = "+ones);
			System.out.println(((1<<ones)-1) << (n-ones));
		}
	}
}
