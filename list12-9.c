//自動車の移動

#include<math.h>
#include<stdio.h>

#define sqr(n) ((n) * (n))

//点座標を表す構造体
typedef struct {
	double x; //X座標
	double y; //Y座標
}Point;

//自動車を表す構造体
typedef struct {
	Point pt; //現在位置
	double fuel; //残り燃料
} Car;

//点p1と点p2の距離を返す
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

//自動車の現在位置と残り燃料を表示
void put_info(Car c)
{
	printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料：%.2fリットル\n", c.fuel);
}

//cの指す車を目的座標destに移動
int move(Car* c, Point dest)
{
	double d = distance_of(c->pt, dest); //移動距離
	if (d > c->fuel) //移動距離が燃料を超過
		return 0; //移動負荷
	c->pt = dest; //現在位置を更新（destに移動）
	c->fuel -= d; //燃料を更新（移動距離ｄの分だけ減る）
	return 1; //移動成功
}

/*
int main(void)
{
	Car mycar = { {0.0, 0.0}, 90.0 };
	while (1) {
		int select; 
		Point dest; //目的地の座標
		put_info(mycar); //現在位置と残り燃料を表示
		printf("移動しますか？【Yes…1 / No…0】：");
		scanf("%d", &select);
		if (select != 1) break;
		printf("目的地のＸ座標："); scanf("%lf", &dest.x);
		printf("　　　　Ｙ座標："); scanf("%lf", &dest.y);
		if (!move(&mycar, dest))
			puts("燃料不足で移動できません。");
	}
	return 0;
}
*/


int main(void)
{
	Car mycar = { {0.0, 0.0}, 90.0 };
	while (1) {
		int select;
		Point dest;

		put_info(mycar);
		printf("移動しますか【1…移動入力座標 / 2…移動距離入力 / 0…終了】");
		scanf("%d", &select);
		if (select != 1 && select != 2) break;
		switch (select) {
		case 1:
			printf("目的地のX座標："); scanf("%lf", &dest.x);
			printf("        Y座標："); scanf("%lf", &dest.y);
			break;
		case 2: {
			double x, y;
			printf("X方向の移動距離："); scanf("%lf", &x);
			printf("Y方向の移動距離："); scanf("%lf", &y);
			dest.x = mycar.pt.x + x;
			dest.y = mycar.pt.y + y;
			break;
		}
		}
		if (!move(&mycar, dest))
			puts("燃料不足で移動できません。");
	}
	return 0;
}
