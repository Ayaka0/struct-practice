//�w���̃f�[�^�Ǘ�

#include<stdio.h>

#define NAME_LEN 50

//�w����\���\����
typedef struct {
	char name[NAME_LEN];
	int age;
	float score;
} Student;

//�w���̃f�[�^����
void inputStudentData(Student* student) {
	printf("���O�F"); scanf("%s",student->name);
	printf("�N��F"); scanf("%d",&student->age);
	printf("���сF"); scanf("%f",&student->score);
}

//�w���̃f�[�^�\��
void displayStudentData(const Student* student) {
	printf("���O�F%s\n", student->name);
	printf("�N��F%d\n", student->age);
	printf("���сF%.2f\n", student->score);
}
int main(void)
{
	Student student;

	inputStudentData(&student);
	printf("\n���͂��ꂽ�w���f�[�^�F\n");
	displayStudentData(&student);

	return 0;
}

