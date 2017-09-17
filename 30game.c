#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	int you, com;
	int menu;
	int num=0;

	srand((long) time(NULL));

	while (1)
	{
		printf("<< '30' Game >>\n\n");
		printf("1. Game Start (You are first)\n");
		printf("2. Game Start (Computer is first)\n");
		printf("3. Game End\n\n");
		printf("> ");
		scanf("%d",&menu);

		switch (menu)
		{
		case 1:
			system("cls");
			printf("<< Game Start >>\n");
			
			while (1)
			{
				printf("\nYou : ");
				scanf("%d",&you);

				if(you <= 0 || you >= 4)			
					printf("잘못 입력 하셨습니다.\n");
				else
				{
					for(i=0; i < you; i++)
					{
						num++;
						printf("%d\n", num);
						if(num == 30)
							break;
					} 
	
					if(num == 30)
					{
						printf("\n\n\t\t<< You Lose >>\n\n\n\n");
						num=0;
						system("pause");
						system("cls");
						break;
					}
				}
				
				com = rand()%3+1;
				if (you >= 1 && you <= 3)
				{
					printf("\nBot : %d\n", com);
					for(i=0; i < com; i++)
					{
						num++;
						printf("%d\n", num);
						if (num == 30)
							break;
					}
					if (num == 30)
					{
						printf("\n\n\t\t<< You Win >>\n\n\n\n");
						num=0;
						system("pause");
						system("cls");
						break;
					}
				}
			}
			break;
		case 2:
			system("cls");
			printf("<< Game Start >>\n");
			
			while (1)
			{	
				com = rand()%3+1;
				printf("\nBot : %d\n", com);
				for(i=0; i < com; i++)
				{
					num++;
					printf("%d\n", num);
					if (num == 30)
						break;
				}
				if (num == 30)
				{
					printf("\n\n\t\t<< You Win >>\n\n\n\n");
					num=0;
					system("pause");
					system("cls");
					break;
				}

				printf("\nYou : ");
				scanf("%d",&you);

				if(you <= 0 || you >= 4)			
					printf("잘못 입력 하셨습니다.\n");
				else
				{
					for(i=0; i < you; i++)
					{
						num++;
						printf("%d\n", num);
						if(num == 30)
							break;
					} 
	
					if(num == 30)
					{
						printf("\n\n\t\t<< You Lose >>\n\n\n\n");
						num=0;
						system("pause");
						system("cls");
						break;
					}
				}
			}
			break;
		case 3:
			return 0;
		default : 
			printf("잘못 입력 하셨습니다.\n");
			system("pause");
			system("cls");
			break;
		}
	}

	return 0;
}