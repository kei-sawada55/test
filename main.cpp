#include <stdio.h>

void main()
{
	char flg = 0;
	char* score[] = { "��ۑ�", "��ۑ�", "�O�ۑ�", "�z�[������" };
	int hit = 0;

	while (true)
	{
		//���́A�\��
		flg |= 1;
		scanf_s("%d", &hit);
		printf("%s\n", score[hit - 1]);

		//���͕��V�t�g
		flg <<= hit;

		//�ۂ̏󋵂�\��
		for (int i = 2; i <= 8; i<<=1)
		{
			if (flg & i)
				printf("��");
			else
				printf("�~");
		}

		//�z�[���֋A����������
		if (flg & 0xF0)
		{
			printf(" ���z�[���C����");
			flg &= 0x0F;		//�z�[���C���������Z�b�g
		}

		printf("\n");
	}
}