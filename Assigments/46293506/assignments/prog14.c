#include<stdio.h>

 int main()

 {
    int arr[9]; 
	int arr1[9];
	int ivalue=0;
	int kvalue=0;
	int jvalue=0;
    int lvalue=0;
	for(ivalue=0;ivalue<9;ivalue++)
	  {
	    printf("ENTER A %dth value array\n",ivalue);
		scanf("%d",&arr[ivalue]);
	  }  
   	for(ivalue=0;ivalue<9;ivalue++)
	  {
	   printf("%d ",arr[ivalue]);
	  }
      printf("enter a k value\n");
	  scanf("%d",&kvalue);
       	
        for(ivalue=0;ivalue<9;ivalue++)
	      {   
		       if(ivalue<kvalue)
			     {
				    flag=0;

				 }
				 else{
				      flag=1;
					  kvalue=kvalue+kavlue;
				 }
		       if(flag==0)
			    { 
				  arr1[jvalue]=arr[ivalue];
				  jvalue--;
				}
				if(ivalue>kvalue)
				 { 
				   jvalue=kvalue;
				   arr1[jvalue]=arr[ivalue];
				   jvalue--;
				 }
				 kvalue=kvalue+kvalue;
		  }

     	for(ivalue=0;ivalue<9;ivalue++)
	     {
		     printf("%d ",arr[ivalue]);
		 }
	   for(ivalue=0;ivalue<9;ivalue++)	 
	      {
		     printf("%d ",arr1[ivalue]);
		  }
  return 0;
 }
