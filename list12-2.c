//�w����\���\����

#include<stdio.h>
#include<string.h>

#define NAME_LEN 64 //���O�̕�����

//�w����\���\����
typedef struct {
	char name[NAME_LEN]; //���O
	int height; //�g��
	double weight; //�̏d
	char blood[NAME_LEN]; //���t�^
}student;

int main(void) {

	student sanaka;

	strcpy_s(sanaka.name, sizeof(sanaka.name), "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	strcpy_s(sanaka.blood, sizeof(sanaka.blood), "A");

	printf("������%s\n", sanaka.name);
	printf("�g����%d\n", sanaka.height);
	printf("�̏d��%.1f\n", sanaka.weight);
	printf("���t�^��%s\n", sanaka.blood);

	return 0;

}