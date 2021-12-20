import java.util.*;

class Program141
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int  iValue = 0; boolean bRet = false;
		
		System.out.println("Enter Number");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		bRet = mobj.CheckPrime(iValue);
		if(bRet == true)
		{
			System.out.println("Number is Prime");
		}
		else
		{
			System.out.println("Number is not Prime");
		}
		
	}
}
class Marvellous
{
	public boolean CheckPrime(int iNo1)
	{
		boolean flage = true;
		int iCnt = 0;
		
		for(iCnt = 2; iCnt < iNo1/2 ; iCnt++)
		{
			if((iNo1 % iCnt) == 0)
			{
				flage = false;
				break;
			}
		}
	 return flage;	
	}
}