#include <stdio.h>

void main()
{
	char flg = 0;
	char* score[] = { "一塁打", "二塁打", "三塁打", "ホームラン" };
	int hit = 0;

	while (true)
	{
		//入力、表示
		flg |= 1;
		scanf_s("%d", &hit);
		printf("%s\n", score[hit - 1]);

		//入力分シフト
		flg <<= hit;

		//塁の状況を表示
		for (int i = 2; i <= 8; i<<=1)
		{
			if (flg & i)
				printf("○");
			else
				printf("×");
		}

		//ホームへ帰ったか判定
		if (flg & 0xF0)
		{
			printf(" ★ホームイン★");
			flg &= 0x0F;		//ホームイン情報をリセット
		}

		printf("\n");
	}
}