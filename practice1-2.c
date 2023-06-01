//構造体を返却する関数

#include<stdio.h>

//xyz構造体
struct xyz {
	int x;
	long y;
	double z;
};


//{x,y,z}の値を持つxyz構造体を返却する関数
struct xyz  scan_xyz(int x, long y, double z) {
	struct xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp; //構造体を丸ごと返却
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
	
	struct xyz s = scan_xyz(x, y, z); // 構造体を返却する関数を呼び出して、結果を変数sに代入します

	printf("x = %d\n", s.x);
	printf("y = %ld\n", s.y);
	printf("z = %f\n", s.z);
	/*printf("");
	printf();
	printf();

	*/
	return 0;
}
