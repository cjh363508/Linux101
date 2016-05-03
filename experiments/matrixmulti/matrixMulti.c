#include "include/matrixMulti.h"

void matrixMulti(int **mat1, int **mat2,int **result, int *size)
{
	int i,j,k;
	for(i=0;i<size[0];++i)
	    for(j=0;j<size[2];++j) result[i][j]=0;
	for(i=0;i<size[0];++i)
		for(j=0;j<size[1];++j)
			for(k=0;k<size[2];++k)
				result[i][k]+=mat1[i][j]*mat2[j][k];
	return;
}
