#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

typedef struct point //结构体定义
{
    double x;
    double y;
} p;


typedef struct // 记录最近点对
{
    p p1;
    p p2;
    double dist;
} closest_pair;

int bijiaox(const void* a1, const void* b1) //x的比较
{
    p* a = (p*)a1;
    p* b = (p*)b1;
    if (a->x > b->x) return 1;
    else if (a->x < b->x) return -1;
    else return 0;
}

int bijiaoy(const void* a1, const void* b1) //y的比较
{
    p* a = (p*)a1;
    p* b = (p*)b1;
    if (a->y > b->y) return 1;
    else if (a->y < b->y) return -1;
    else return 0;
}

double juli(p i, p j) //计算两点间的距离
{
    return sqrt(pow(i.x - j.x, 2) + pow(j.y - i.y, 2));
}

double get_random() //时间戳生成
{
    return (double)rand() / RAND_MAX * 100;
}

double zuijin(p* point1, int k, int j, closest_pair *cp) //计算最近
{
    double d = INT_MAX;
    if (j - k < 3) 
    {
        for (int i = k; i < j; i++) 
        {
            for (int j1 = i + 1; j1 <= j; j1++) 
            {
                double d_temp = juli(point1[i], point1[j1]);
                if (d_temp < d) 
                {
                    d = d_temp;
                    cp->p1 = point1[i];
                    cp->p2 = point1[j1];
                    cp->dist = d;
                }
            }
        }
        return d;
    }

    int z = (k + j) / 2;
    closest_pair cp1, cp2;
    double d1 = zuijin(point1, k, z, &cp1);
    double d2 = zuijin(point1, z + 1, j, &cp2);
    
    if (d1 < d2) 
	{
        d = d1;
        *cp = cp1;
    }  
	else 
	{
        d = d2;
        *cp = cp2;
    }

    p *R = (p*)malloc(sizeof(p)*(j - k + 1));
    int top = 0;

    for (int i = k; i <= j; ++i) 
    {
        if (fabs(point1[i].x - point1[z].x) < d) 
        {
            R[top++] = point1[i];
        }
    }

    qsort(R, top, sizeof(p), bijiaoy);

    for (int i = 0; i < top - 1; ++i) 
    {
        for (int j1 = i + 1; j1 < top && (R[j1].y - R[i].y) < d; ++j1) 
        {
            double d3 = juli(R[i], R[j1]);
            if (d3 < d) 
            {
                d = d3;
                cp->p1 = R[i];
                cp->p2 = R[j1];
                cp->dist = d;
            }
        }
    }
    
    free(R); // 释放内存
    return d;
}

int main() 
{
    int N;
    printf("请输入N：");
    scanf("%d", &N);
    
    srand(time(NULL));

    p *points = (p *)malloc(sizeof(p) * N);

    for (int i = 0; i < N; i++) 
    {
        points[i].x = get_random();						
        points[i].y = get_random();					
    }

    printf("\n");

    qsort(points, N, sizeof(p), bijiaox);
    
    closest_pair cp;
    double min_dist = zuijin(points, 0, N - 1, &cp);

    printf("最小距离为: %lf\n", min_dist);
    printf("最近点对为: (%lf, %lf) 和 (%lf, %lf)\n", cp.p1.x, cp.p1.y, cp.p2.x, cp.p2.y);

    free(points); // 释放内存
    return 0;
}
