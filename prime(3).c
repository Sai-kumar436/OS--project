#include<stdio.h>
#include<conio.h>
#include<pthread.h>
#include<unistd.h>
void *thread1(void *arg);
void main()
{
	int n;
	printf("\n Input Thread \n");
	printf("Enter a number: ");
	scanf("%d",&n);

	pthread_t t1;
	pthread_create(&t1,NULL,thread1,&n);
	pthread_join(t1,NULL);
	
}
void *thread1(void *arg)
{
	printf("\n Output Thread \n");
	printf("\nThe prime numbers less than or equal to the input number is \n");
	int *number=(int *) arg;
	int n,b,i;
	
	for(b=2;b<=*number;b++)
	{
	
 	 i=2;
 	while(b%i!=0)
  	{
  		i++;
  	}
  	
 	if(i==b)
  	{
		printf("%d\n",b) ;
		}
		
  }

}

