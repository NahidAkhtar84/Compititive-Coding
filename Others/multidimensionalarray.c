#include<stdio.h>
int main(){
int A[100][100], B[100][100], C[100][100];
int M,P,N, I, J, K;

printf("Enter the number of rows for 1st matrix value:");
scanf("%d", &M);

printf("Enter the number of columns for 1st matrix  =  the number of rows for 2nd matrix:");
scanf("%d", &P);

printf("Enter the number of columns for 2nd matrix value:");
scanf("%d", &N);

printf("Enter the values of 1st matrix:");
for(I = 0; I < M; I++){
	for(J = 0; J < P; J++)
		scanf("%d", &A[I][J]);
}

printf("Enter the values of 2nd matrix:");
for(I = 0; I < P; I++){
	for(J = 0; J < N; J++)
		scanf("%d", &B[I][J]);
}

printf("The 1st matrix:\n");
for(I = 0; I < M; I++){
	for(J = 0; J < P; J++)
		printf("%d\t", A[I][J]);
	printf("\n");
}

printf("The 2nd matrix:\n");
for(I = 0; I < P; I++){
	for(J = 0; J < N; J++)
		printf("%d\t", B[I][J]);
	printf("\n");
}

for(I = 0; I < M; I++){
	for(J = 0; J < N; J++){
		C[I][J] = 0;
		for(K = 0; K < P ; K++){
			C[I][J] = C[I][J] + A [I][K] * B[K][J];
		}
	}
}
printf("The matrix multiplication:\n");
for(I = 0; I < M; I++){
	for(J = 0; J < P; J++)
		printf("%d\t", C[I][J]);
	printf("\n");
}


return 0;
}

