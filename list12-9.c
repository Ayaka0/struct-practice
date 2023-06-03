//�����Ԃ̈ړ�

#include<math.h>
#include<stdio.h>

#define sqr(n) ((n) * (n))

//�_���W��\���\����
typedef struct {
	double x; //X���W
	double y; //Y���W
}Point;

//�����Ԃ�\���\����
typedef struct {
	Point pt; //���݈ʒu
	double fuel; //�c��R��
} Car;

//�_p1�Ɠ_p2�̋�����Ԃ�
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

//�����Ԃ̌��݈ʒu�Ǝc��R����\��
void put_info(Car c)
{
	printf("���݈ʒu�F(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("�c��R���F%.2f���b�g��\n", c.fuel);
}

//c�̎w���Ԃ�ړI���Wdest�Ɉړ�
int move(Car* c, Point dest)
{
	double d = distance_of(c->pt, dest); //�ړ�����
	if (d > c->fuel) //�ړ��������R���𒴉�
		return 0; //�ړ�����
	c->pt = dest; //���݈ʒu���X�V�idest�Ɉړ��j
	c->fuel -= d; //�R�����X�V�i�ړ��������̕���������j
	return 1; //�ړ�����
}

int main(void)
{
	Car mycar = { {0.0, 0.0}, 90.0 };
	while (1) {
		int select; 
		Point dest; //�ړI�n�̍��W
		put_info(mycar); //���݈ʒu�Ǝc��R����\��
		printf("�ړ����܂����H�yYes�c1 / No�c0�z�F");
		scanf("%d", &select);
		if (select != 1) break;
		printf("�ړI�n�̂w���W�F"); scanf("%lf", &dest.x);
		printf("�@�@�@�@�x���W�F"); scanf("%lf", &dest.y);
		if (!move(&mycar, dest))
			puts("�R���s���ňړ��ł��܂���B");
	}
	return 0;
}