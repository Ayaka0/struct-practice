//�\���̂�ԋp����֐�

#include<stdio.h>

//xyz�\����
struct xyz {
	int x;
	long y;
	double z;
};


//{x,y,z}�̒l������xyz�\���̂�ԋp����֐�
struct xyz  scan_xyz(int x, long y, double z) {
	struct xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp; //�\���̂��ۂ��ƕԋp
}

int main(void) {
	int x;
	long y;
	double z;

	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%ld", &y);
	printf("z = ");
	scanf("%lf", &z);
	
	struct xyz s = scan_xyz(x, y, z); // �\���̂�ԋp����֐����Ăяo���āA���ʂ�ϐ�s�ɑ�����܂�

	printf("x = %d\n", s.x);
	printf("y = %ld\n", s.y);
	printf("z = %f\n", s.z);
	/*printf("");
	printf();
	printf();

	*/
	return 0;
}
