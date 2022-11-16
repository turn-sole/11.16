#include<stdio.h>
//int main()
//{
//	
//	int b = 0;
//	float c = 0;
//	
//	b = 4 / 2;
//	c = 5 / 2.0;
//	printf(" %d %f", b, c);
//	return 0;
//}
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//void print(int x)
//{
//    if (x > 5)
//    {
//        print(x / 6);
//    }
//    printf("%d", x % 6);
//}
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    print(n);
//    return 0;
//}
//int main() {
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int arr1[m][n] = { 0 };
//    int arr2[n][m] = { 0 };
//    for (int a = 0; a < m; a++)
//    {
//        for (int b = 0; b < n; b++)
//        {
//            scanf("%d", &arr1[a][b]);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            int arr2[i][j] = arr1[j][i];
//            printf("%d ", arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main() {
//    int N = 0;
//    int arr[50] = { 0 };
//    int a = 0;
//    for (int i = 0; i <= N; i++)
//    {
//        scanf_s("%d ", &arr[i]);
//    }
//    scanf_s("%d", &a);
//    for (int i = 0; i <= N; i++)
//    {
//        if (arr[i] != a)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int num = 10;
//	num >> -1;
//	printf("%d", num);
//}
int main()
{
	int a = 10;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d  b=%d\n", a, b);
	return 0;
}