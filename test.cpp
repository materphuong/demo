#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,max,d;
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    printf("Nhap c=");
    scanf("%d",&c);
    max=a; 
    d=0;
    d=a+b+c;
    if(b>max)
    {
          max=b; 
    }
    if(c>max)
      {
        max=c;
     }
   
    printf("gia tri lon nhat la: %d",max);
    printf("tong 3 so la:%d",d);
    getch();
}