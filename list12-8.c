//2�_�Ԃ̋���

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n))  //�Q��l�����߂�

//�_�̍��W��\���\����
typedef struct {
	double x; //x���W
	double y; //Y���W
}Point;

//�_p�P�Ɠ_p�Q�̋�����Ԃ�
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

int main(void) {
	Point crnt, dest;

	printf("���݂�X���W�F"); scanf("%lf", &crnt.x);
	printf("      Y���W�F"); scanf("%lf", &crnt.y);
	printf("�ړI�n��X���W�F"); scanf("%lf", &dest.x);
	printf("        Y���W�F"); scanf("%lf", &dest.y);

	printf("�ړI�n�܂ł̋�����%.2f�ł��B\n", distance_of(crnt, dest));

	return 0;
}