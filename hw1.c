#include <stdio.h>
#include <stdlib.h>

int main()
{int i,a,b,s1,s2,s3,s4,s5;
printf("ilk sayiyi  giriniz:");
scanf("%d",&a);
printf("ikinci sayiyi giriniz:");
scanf("%d",&b);
printf("yapmak istediginiz islemi giriniz:\n");
printf("1-toplama\n");
printf("2-cikarma\n");
printf("3-carpma\n");
printf("4-bolme\n");
printf("5-mod alma\n");
scanf("%d",&i);
if(i==1)
{s1=a+b;
printf("sonuc:%d",s1);}
else if(i==2)
{s2=a-b;
printf("sonuc:%d",s2);}
else if(i==3)
{s3=a*b;
printf("sonuc:%d",s3);}
else if(i==4)
{s4=a/b;
printf("sonuc:%d",s4);}
else if(i==5)
{s5=a%b;
printf("sonuc:%d",s5);}
return 0;
}
