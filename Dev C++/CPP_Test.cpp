#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

// 计算两点间的平方距离
double distSquared(const Point& p1, const Point& p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}

// 暴力法求解最近点对，适用于 n < 3 的情况
double bruteForce(vector<Point>& points, int n) {
    double minDist = 1e9;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            minDist = min(minDist, distSquared(points[i], points[j]));
        }
    }
    return minDist;
}

// 带状区域的最小点对距离
double stripClosest(vector<Point>& strip, double d) {
    double minDist = d;
    sort(strip.begin(), strip.end(), [](Point& p1, Point& p2) { return p1.y < p2.y; });
    for (int i = 0; i < strip.size(); ++i) {
        for (int j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < minDist; ++j) {
            minDist = min(minDist, distSquared(strip[i], strip[j]));
        }
    }
    return minDist;
}

// 递归求解最小点对距离
double closestUtil(vector<Point>& points, int left, int right) {
    if (right - left <= 3) {
        return bruteForce(points, right - left);
    }

    int mid = (left + right) / 2;
    double dl = closestUtil(points, left, mid);
    double dr = closestUtil(points, mid, right);

    double d = min(dl, dr);

    vector<Point> strip;
    for (int i = left; i < right; ++i) {
        if (fabs(points[i].x - points[mid].x) < d) {
            strip.push_back(points[i]);
        }
    }
    
    return min(d, stripClosest(strip, d));
}

// 主函数
double closest(vector<Point>& points) {
    sort(points.begin(), points.end(), [](Point& p1, Point& p2) { return p1.x < p2.x; });
    return closestUtil(points, 0, points.size());
}

int main() {
    vector<Point> points = {{2.3, 3.4}, {1.5, 1.6}, {4.7, 5.9}, {3.1, 2.8}, {6.3, 7.1}};
    cout << "The smallest distance is: " << sqrt(closest(points)) << endl;
    return 0;
}
