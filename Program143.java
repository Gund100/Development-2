import java.util.*;

class Program143
{
	public static void main(String Args[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0 ; int iCnt = 0;
		
		System.out.println("Enter number elements");
		iSize = sobj.nextInt();
		int Arr[] = new int[iSize];
		System.out.println("Enter numbers");
		for(iCnt = 0; iCnt < Arr.length; iCnt++);
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}