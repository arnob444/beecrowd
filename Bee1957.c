#include<stdio.h>
int main()
{
  long int a;
  while(scanf("%ld",&a)!= EOF)
  {
      printf("%X\n", a);
  }

  return 0;
}
// #include<stdio.h>

// main()
// {
// 	int i,a,b;
// 	int sum=0;
// 		scanf("%d %d",&a,&b);
// 		for(i=a; i<=b; i++)
//      {
// 			sum+=i;
// 		}
// 		printf("%d\n",sum);
	
// }