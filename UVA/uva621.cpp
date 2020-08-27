
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t,i;
	char a[1000];

	scanf("%d", &t);
	for(i=0;i<t;i++) {
		scanf("%s", a);

		int len = strlen(a);

		if (strcmp(a, "1") == 0 || strcmp(a, "4") == 0 || strcmp(a, "78") == 0)
			printf("+\n");
		else if (a[len - 1] == '5' && a[len - 2] == '3')
			printf("-\n");
		else if (a[0] == '9' && a[len - 1] == '4')
			printf("*\n");
		else if (a[0] == '1' && a[1] == '9' && a[2] == '0')
			printf("?\n");
		else
			printf("+\n");
	}

	return 0;
}
