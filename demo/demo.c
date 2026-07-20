//For example : demo of dynamic memory allocation
#include<stdio.h>
#include<conio.h>
void main()
{

	FILE *fp;
	char name[50];
	int salary,i=0;
	fp = fopen("d:\\bca\\demo\\profile.txt", "w");

	if(fp==NULL)
	{
		printf("\n The file could not be opened");
		exit(1);
	}


		puts("\n Enter your name : ");
		fflush(stdin);
		gets(name);

		while(name[i] != '\0')
        {

		fputc(name[i],fp);
		i++;
		//fprintf(fp, " (%d) NAME : %s \t SALARY  %d\n\n", (i+1), name, salary);
        }


	fclose(fp);
}


