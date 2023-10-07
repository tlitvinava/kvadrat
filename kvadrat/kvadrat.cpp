#include <iostream>
#include <cmath>
#include<iomanip>

int main() {

	long double k, x, y, x1, x2, y1, y2, x3, y3, xy, x4, y4, xy1, xy2, xmin, ymin, xymin;
	std::cin >> k >> x >> y;
	if (k < 0) { //если k<0
		k = (-1) * k;
		x = x + k;
		y = y + k;
	}
	if (k > 0) { //еслт k>0
		if (x == k || y == k) {//если точка лежит на стороне
			std::cout << std::setprecision(22) << 0;
		}
		else if (x < k && y < k && x>0 && y>0) { //если точка внутри квадрата
			x1 = k - x;
			y1 = k - y;
			/*if (x <= x1 && y <= y1) {
				if (x <= y) {
					std::cout << std::setprecision(22) << x;
				}
				else if (x >= y) {
					std::cout << std::setprecision(22) << y;
				}
			}
			else if (x > x1 && y > y1) {
				if (x1 <= y1) {
					std::cout << std::setprecision(22) << x1;
				}
				else if (x1 >= y1) {
					std::cout << std::setprecision(22) << y1;
				}
			}
			else if (x >= y1) {
				std::cout << std::setprecision(22) << y1;
			}
			else if (x <= y1) {
				std::cout << std::setprecision(22) << x;
			}
			else if (y >= x1) {
				std::cout << std::setprecision(22) << x1;
			}
			else if (y <= x1) {
				std::cout << std::setprecision(22) << y;
			}*/
			xmin = std::min(x, x1);
			ymin = std::min(y, y1);
			xymin = std::min(xmin, ymin);
			std::cout << std::setprecision(22) << xymin;
		}
		else if (x > k && y < k && y>0) { //если точка снаружи квадрата сбоку (справа)
			x2 = x - k;
			std::cout << std::setprecision(22) << x2;
		}
		else if (x < k && y > k && x > 0) { //если точка снаружи квадрата вверху
			y2 = y - k;
			std::cout << std::setprecision(22) << y2;
		}
		else if (x > k && y > k && y > 0 && x > 0) {//если точка в области, где надо считать по пифагору 
			x3 = x - k;
			y3 = y - k;
			xy = sqrt(x3 * x3 + y3 * y3);
			std::cout << std::setprecision(22) << xy;

		}
		else if (x < 0 && y > 0) { //если точка находится во 2 четверти
			y4 = y - k;
			x = fabsl(x);
			if (x >= y4) {
				std::cout << std::setprecision(22) << y4;
			}
			else if (x <= y4) {
				std::cout << std::setprecision(22) << x;
			}

		}
		else if (x > 0 && y < 0) {//если точка находится в 4 четверти
			x4 = x - k;
			y = fabsl(y);
			if (y >= x4) {
				std::cout << std::setprecision(22) << x4;
			}
			else if (y <= x4) {
				std::cout << std::setprecision(22) << y;
			}
		}
		else if (x < 0 && y < 0) {  //если точка находится в 3 четверти
			xy1 = sqrt(x * x + y * y);
			std::cout << std::setprecision(22) << xy1;
		}
		else if (k == 0) {

			if (x == 0) {
				std::cout << std::setprecision(22) << y;
			}
			else if (y == 0) {
				std::cout << std::setprecision(22) << x;
			}
			else {
				xy2 = sqrt(x * x + y * y);
				std::cout << std::setprecision(22) << xy2;
			}
		}
	}
	return 0;
}

