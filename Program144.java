import java.util.*;

class Marvellous
{
	public int Add(int Brr[])
	{
		int iCnt = 0; int iSum = 0;
		for(iCnt = 0; iCnt < Brr.length; iCnt++)
		{
			iSum = iSum + Brr[iCnt];
		}
		return iSum;
	}
}
class Program144
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue1 = 0; int iRet = 0; int i =0;
		
		System.out.println("Enter the number");
		iValue1 = sobj.nextInt();
		
		int Arr[] = new int[iValue1];
		System.out.println("Enter numbers");
		
		for(i = 0; i < Arr.length; i++);
		{
			Arr[i] = sobj.nextInt();
		}
		Marvellous mobj = new Marvellous();
		iRet = mobj.Add(Arr);
		System.out.println("Addition is : "+iRet);
	}
}

