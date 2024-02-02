#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	if (argc < 3) {
		printf("too few arguments\n");
	}

	char* op = argv[1];
	int rows = atoi(argv[2]);
	int columns = atoi(argv[3]);
	printf("%c %d %d\n", *op, rows, columns);

	for (int i = 0; i < rows; i++) {
		if (i == 0) {
			printf("%c %3| ", *op);
			for (int j = 1; j < columns + 1; j++) {
				printf("%3d", j);
			}
		}

		if (i == 1) {
			printf("\n--- %c", *op);
		}
	}
	printf("\n");
}