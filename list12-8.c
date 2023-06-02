//2点間の距離

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n))  //２乗値を求める

//点の座標を表す構造体
typedef struct {
	double x; //x座標
	double y; //Y座標
}Point;

//点p１と点p２の距離を返す
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

int main(void) {
	Point crnt, dest;

	printf("現在のX座標："); scanf("%lf", &crnt.x);
	printf("      Y座標："); scanf("%lf", &crnt.y);
	printf("目的地のX座標："); scanf("%lf", &dest.x);
	printf("        Y座標："); scanf("%lf", &dest.y);

	printf("目的地までの距離は%.2fです。\n", distance_of(crnt, dest));

	return 0;
}