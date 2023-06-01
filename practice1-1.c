#include<stdio.h>

//テストの点数を表す構造体、名前、3教科名
struct Test {
	char name[32];
	int kokugo;
	int sansu;
	int eigo;
};

//学生を表す構造体、配列使用、名前と3教科の点数
struct Test student[3] = {
	{"太郎",40, 50, 60},
	{"次郎", 45, 55, 65},
	{"三郎", 60, 70, 80}
};

//点線の関数 ----
void line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
	return;
}

//学生3名の3教科分の点数を表示する関数
void show(void) {
	int i;
	for (i = 0; i < 3; i++) {
		printf("%10s %10d %10d %10d\n",
		student[i].name, student[i].kokugo, student[i].sansu, student[i].eigo);
	}
	return;
}
//点線と学生の点数を表示するプロトタイプ宣言
void show(void);
void line(void);

int main(void)
{
	printf("%10s %10s %10s %10s\n", "名前", "国語", "算数", "英語");
	line();
	show();
	line();
	return 0;
}