
int isPrime(int n)
{
 int i;
 int flag=0;
  
 if(n<=1)
 {
  flag=1;
 }
 if(flag!=1)
   {
      for(i=2;i<n;i++)
	    {
		   if(n%i==0)
		      {
			    flag=1;
				break;
			  }
		}
     }
return flag;
}
