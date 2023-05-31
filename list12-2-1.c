//学生のデータ管理

#include<stdio.h>

#define NAME_LEN 50

//学生を表す構造体
typedef struct {
	char name[NAME_LEN];
	int age;
	float score;
} Student;

//学生のデータ入力
void inputStudentData(Student* student) {
	printf("名前："); scanf("%s",student->name);
	printf("年齢："); scanf("%d",&student->age);
	printf("成績："); scanf("%f",&student->score);
}

//学生のデータ表示
void displayStudentData(const Student* student) {
	printf("名前：%s\n", student->name);
	printf("年齢：%d\n", student->age);
	printf("成績：%.2f\n", student->score);
}
int main(void)
{
	Student student;

	inputStudentData(&student);
	printf("\n入力された学生データ：\n");
	displayStudentData(&student);

	return 0;
}

