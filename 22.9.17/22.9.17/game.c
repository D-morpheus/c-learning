#define _CRT_SECURE_NO_WARNINGS 1


void game()
{
	int x = rand() % 99 + 1;
	int guess = 0;
	while (1)
	{
		printf("请输入要猜的数字:");
		scanf("%d", &guess);
		if (guess < x)
		{
			printf("猜小了\n");
		}
		else if (guess > x)
		{
			printf("猜大了\n");

		}
		else if (x == guess)
		{
			printf("猜对了！\n");
			break;
		}

	}
	
	
}
