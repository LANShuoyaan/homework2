#include <stdio.h>
int main() {
	int edge1, edge2, edge3;
	for (edge1 = 1; edge1 <= 500; edge1++) {
		for (edge2 = 1; edge2 <= 500; edge2++) {
			for (edge3 = 1; edge3 <= 500; edge3++) {
				if (edge1 * edge1 + edge2 * edge2 == edge3 * edge3) {
					printf("Pythagorean Triple: %d, %d, %d\n", edge1, edge2, edge3);
				}
			}
		}
	}
}
