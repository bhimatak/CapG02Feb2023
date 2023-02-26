#include"myHeader.h"
#include<stdio.h>

int input()
{
  int arr[6] = {1,2,3,4,5,6};
  int noOfEle;
  printf("Enter a number elements to display\n");
  scanf("%d",&noOfEle);
  displayElements(arr,noOfEle);

  }
