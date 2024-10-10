#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct point {
	double x;
	double y;
} p;//结构体定义

int bijiaox(const void* a1, const void* b1) {
	p* a = (p*)a1;
	p* b = (p*)b1;
	return a->x - b->x;
}//x的比较

int bijiaoy(const void* a1, const void* b1) {
	p* a = (p*)a1;
	p* b = (p*)b1;
	return a->y - b->y;
}//y的比较


double juli(p i, p j) {
	return sqrt(pow(i.x - j.x, 2) + pow(j.y - i.y, 2));
}//计算两点间的距离

//求解最近点对
double zuijin(p* point1, int k, int j) {
	double d = INT_MAX;//点为空，则直接返回
	
	if (k == j) {
		return d;
	}//有一个点，直接计算距离
	if (k + 1 == j) {
		return juli(point1[k], point1[j]);
	}
	
	int z = (k + j) / 2;
	double d1 = zuijin(point1, k, z);
	double d2 = zuijin(point1, z + 1, j);
	d = fmin(d1, d2);
	p *R = (p*)malloc(sizeof(p)*(j - k + 1));
	int top = 0;
	
	for (int i = k; i <= j; ++i) {
		if (fabs(point1[i].x - point1[z].x) < d) {
			R[top++] = point1[i];
		}
	}
	
	qsort(R, top, sizeof(p), bijiaoy);
	for (int i = 0; i < top - 1; ++i) {
		for (int j1 = i + 1; j1 < top; ++j1) {
			if (fabs(point1[i].y - point1[j1].y) < d) {
				double d3 = juli(point1[i], point1[j1]);
				if (d3 < d) {
					d = d3;
				}
			}
		}
	}
	return d;
}

int main() {
	int N;
	printf("请输入N：");
	scanf("%d", &N);
	
	p *points = (p *)malloc(sizeof(p) * N);
	
	for (int i = 0; i < N; i++) {
		points[i].x = (double)(rand() % 10000) / 100 - 50;						
		points[i].y = (double)(rand() % 10000) / 100 - 50;						
		printf("集合[%d] = (%lf, %lf)\n", i, points[i].x, points[i].y);
	}
	
	printf("\n");
	
	qsort(points, N, sizeof(p), bijiaox);
	printf("最小距离为%lf", zuijin(points, 0, N - 1));

	return 0;
}

