#include<stdio.h>

//�e�X�g�̓_����\���\���́A���O�A3���Ȗ�
struct Test {
	char name[32];
	int kokugo;
	int sansu;
	int eigo;
};

//�w����\���\���́A�z��g�p�A���O��3���Ȃ̓_��
struct Test student[3] = {
	{"���Y",40, 50, 60},
	{"���Y", 45, 55, 65},
	{"�O�Y", 60, 70, 80}
};

//�_���̊֐� ----
void line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
	return;
}

//�w��3����3���ȕ��̓_����\������֐�
void show(void) {
	int i;
	for (i = 0; i < 3; i++) {
		printf("%10s %10d %10d %10d\n",
		student[i].name, student[i].kokugo, student[i].sansu, student[i].eigo);
	}
	return;
}
//�_���Ɗw���̓_����\������v���g�^�C�v�錾
void show(void);
void line(void);

int main(void)
{
	printf("%10s %10s %10s %10s\n", "���O", "����", "�Z��", "�p��");
	line();
	show();
	line();
	return 0;
}