#define _CRT_SECURE_NO_WARNINGS 1


void game()
{
	int x = rand() % 99 + 1;
	int guess = 0;
	while (1)
	{
		printf("������Ҫ�µ�����:");
		scanf("%d", &guess);
		if (guess < x)
		{
			printf("��С��\n");
		}
		else if (guess > x)
		{
			printf("�´���\n");

		}
		else if (x == guess)
		{
			printf("�¶��ˣ�\n");
			break;
		}

	}
	
	
}
