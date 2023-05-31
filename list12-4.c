//学生を表す構造体

#include<stdio.h>

#define NAME_LEN 64 //名前の文字数

//学生を表す構造体
typedef struct{
	char name[NAME_LEN]; //名前
	int height; //身長
	double weight; //体重
	char blood[NAME_LEN]; //血液型
} Student;

//sが指す学生の体重が0以下であれば標準体重を代入
void set_stdweight(Student *s) {
	if (s->weight <= 0)
		s->weight = (s->height - 100) * 0.9;
}


int main(void) {

	Student sanaka = {"Sanaka", 173, 0, "A"};
	set_stdweight(&sanaka); 

	/*
	strcpy_s(sanaka.name, sizeof(sanaka.name), "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	strcpy_s(sanaka.blood, sizeof(sanaka.blood), "A");
	*/

	printf("氏名＝%s\n", sanaka.name);
	printf("身長＝%d\n", sanaka.height);
	printf("体重＝%.1f\n", sanaka.weight);
	printf("血液型＝%s\n", sanaka.blood);

	return 0;

}