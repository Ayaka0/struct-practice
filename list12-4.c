//�w����\���\����

#include<stdio.h>

#define NAME_LEN 64 //���O�̕�����

//�w����\���\����
typedef struct{
	char name[NAME_LEN]; //���O
	int height; //�g��
	double weight; //�̏d
	char blood[NAME_LEN]; //���t�^
} Student;

//s���w���w���̑̏d��0�ȉ��ł���ΕW���̏d����
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

	printf("������%s\n", sanaka.name);
	printf("�g����%d\n", sanaka.height);
	printf("�̏d��%.1f\n", sanaka.weight);
	printf("���t�^��%s\n", sanaka.blood);

	return 0;

}