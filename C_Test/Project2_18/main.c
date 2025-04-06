#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <stdlib.h>

//
//int compare(int a) {
//	if(a > 0) {
//		return -1;
//	}
//	else if(a = 0) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//
//int main()
//{
//	int num1,result;
//	printf("请输入数字：");
//	scanf("%d", &num1);
//	result = compare(num1);
//	printf("%d\n", result);
//	return 0;
//
//
//int main() 
//{
//	int num1, num2, temp, result;
//	printf("请输入两个数字：");
//	scanf("%d %d", &num1, &num2);
//	while(num1 % num2){
//		temp = num2;
//		num2 = num1 % num2;
//		num1 = temp;
//	}
//	result = num2;
//	printf("最大公约数为：%d\n", result);
//	return 0;
//}

//
//int main() {
//	int i;
//	for (i = 1000; i < 2001; i++) {
//		if (i % 4 == 0 && i % 100 != 0) {
//			printf("%d\n", i);
//		}
//		else if (i % 100 == 0 && i % 400 == 0) {
//			printf("%d\n", i);
//		}
//	}
//}


//bool isPrime(int num){
//	int i;
//	for (i = 2; i < sqrt(num) + 1; i++){
//			if (num % i == 0) {
//				return false;
//			}
//	}
//	return true;
//}

//int isPrime(int num) {
//	int i;
//	for (i = 2; i < sqrt(num) + 1; i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i;
//	for (i = 101; i < 201; i += 2) {
//		if (isPrime(i)) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//void compare(int a, int b, int c) {
//	int max, mid, min;
//	if (a >= b && a >= c) {
//		max = a;
//	}
//	else if (b >= a && b >= c) {
//		max = b;
//	}
//	else {
//		max = c;
//	}
//
//	if (a <= b && a <= c) {
//		min = a;
//	}
//	else if (b <= a && b <= c) {
//		min = b;
//	}
//	else {
//		min = c;
//	}
//
//	if (a != max && a != min) {
//		mid = a;
//	}
//	else if (b != max && b != min) {
//		mid = b;
//	}
//	else {
//		mid = c;
//	}
//
//	printf("%d %d %d", max, mid, min);
//}
//
//int main() {
//	int num1 = 0, num2 = 0, num3 = 0;
//	printf("请输入数字：");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	compare(num1, num2, num3);
//	return 0;
//}
//
//
//int main() {
//	int i;
//	for (i = 1; i < 101; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int number;
//	float  score1, score2, score3;
//	scanf("%d;%f,%f,%f", &number, &score1, &score2, &score3);
//	printf("No.%d,%.2f,%.2f,%.2f", number, score1, score2, score3);
//	return 0;
//}
//
//int main() {
//	printf("printf(\"Hello,World!\\n\")\n");
//	printf("");
//	return 0;
//}

//int main() {
//	int* num = NULL;
//	int n, i, j, print;
//	n = 4;
//	num = (int*)malloc(n * sizeof(int));
//	printf("请输入数字：");
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);  // 输入数组元素
//	}
//	for (i = 0; i < n; i++) {
//		print = 1;
//		for (j = 0; j < n; j++) {
//			if (num[i] < num[j]) {
//				print = 0;
//			}
//		}
//		if (print == 1) {
//			printf("最大数为：%d", num[i]);
//		}
//	}
//	free(num);
//	return 0;
//}
//
//int main() {
//	int* num = NULL;
//	int n, i, j, print, max;
//	printf("请输入要比较元素的个数：");
//	scanf("%d", &n);
//	num = (int*)malloc(n * sizeof(int));
//	if (num == NULL) {
//		free(num);
//		printf("内存分配失败！");
//		return -1;
//	}
//	printf("请输入数字：");
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);  // 输入数组元素
//	}
//		max = num[0];
//		for (j = 1; j < n; j++) {
//			if (num[j] > max) {
//				max = num[j];
//			}
//		}
//		printf("最大数为：%d", max);
//	free(num);
//	return 0;
//}


//int main(int argLen, char** args) {
//
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	for (int i = 0; i < b; i++) {
//		for (int j = 0; j < a; j++) {
//			printf("%c", (char)(65 + i + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//
//int isPrime(int num) {
//    int i;
//    for (i = 2; i < sqrt(num) + 1; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main(int argLen, char** args) {
//    int m, n;
//    scanf("%d%d", &m, &n);
//    for (int j = m; j <= n; j++) {
//        if (isPrime(j)) {
//            printf("%d ", j);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    char a,result;
//    scanf("%c", &a);
//    if (a >= 'a' && a <= 'z') {
//        printf("%c", a - 32);
//    }
//    if (a >= 'A' && a <= 'Z') {
//        result = a + 32;
//    }
//
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int area, weight, error = 1;
//    float temp_weight, price;
//    scanf("%d,%f", &area, &temp_weight);
//    weight = ceil(temp_weight);
//    if (area == 0 || area == 1) {
//        switch (area) {
//        case 0:
//            price = 10 + 3 * (weight - 1);
//            break;
//        case 1:
//            price = 10 + 4 * (weight - 1);
//            break;
//        default:
//            break;
//        }
//    }
//    else if (area == 2 || area == 3 || area == 4) {
//        switch (area) {
//        case 2:
//            price = 15 + 5 * (weight - 1);
//            break;
//        case 3:
//            price = 15 + 6.5 * (weight - 1);
//            break;
//        case 4:
//            price = 15 + 10 * (weight - 1);
//            break;
//        default:
//            break;
//        }
//    }
//    else {
//        printf("Error in Area");
//        error = 0;
//    }
//    if (error != 0) {
//        printf("%.2f", price);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//    float s, area, a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a) {
//        s = (a + b + c) / 2;
//        area = sqrt(s * (s - a) * (s - b) * (s - c));
//        printf("三角形面积为%.2f\n", area);
//        float maxSide = a;
//        if (b > maxSide) maxSide = b;
//        if (c > maxSide) maxSide = c;
//        if (maxSide == a) {
//            if (a * a == b * b + c * c) {
//                printf("直角三角形");
//            }
//            else if (a * a > b * b + c * c) {
//                printf("钝角三角形\n");
//            }
//            else {
//                printf("锐角三角形");
//            }
//        }
//        else if (maxSide == b) {
//            if (b * b == a * a + c * c) {
//                printf("直角三角形");
//            }
//            else if (b * b > a * a + c * c) {
//                printf("钝角三角形");
//            }
//            else {
//                printf("锐角三角形");
//            }
//        }
//        else {
//            if (c * c == a * a + b * b) {
//                printf("直角三角形");
//            }
//            else if (c * c > a * a + b * b) {
//                printf("钝角三角形");
//            }
//            else {
//                printf("锐角三角形");
//            }
//        }
//    }
//    else {
//        printf("无法组成三角形");
//        return -1;
//    }
//    return 0;
//}
//

//
//#define PI = 3.14159
//
//int main() {
//	float r, s, c;
//	float pi = 3.14159;
//	scanf("%f", &r);
//	s = pi * (r * r);
//	c = 2 * pi * r;
//	printf("%.2f %.2f", c, s);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	float r, s, c;
//	float pi = 3.14159;
//	scanf("%f", &r);
//	s = pi * (r * r);
//	c = 2 * pi * r;
//	printf("%.2f %.2f", c, s);
//	return 0;
////}
//
//int main() {
//	int age, weight, pay1, pay2, pay;
//	scanf("%d %d", &age, &weight);
//	if (age < 6) {
//		pay1 = 10;
//	}
//	else if(age >=6 && age < 12){
//		pay1 = 39;
//	}
//	else {
//		pay1 = 78;
//	}
//	pay2 = (weight / 250) * 10;
//	pay = pay1 + pay2;
//	printf("%d", pay);
//	return 0;
//}

//int main() {
//	int num, a, b, c, result;
//	scanf("%d", &num);
//	if (num < 0) {
//		num = -num;
//	}
//	a = num / 100;
//	b = (num / 10) % 10;
//	c = num % 10;
//	result = c * 100 + b * 10 + a;
//	printf("%d", result);
//	return 0;
//}

//int main() {
//	int weight;
//	float height,bmi;
//	scanf("%d,%.2f", &weight, &height);
//	bmi = weight / (height * height);
//	printf("t=%.2f", bmi);
//	return 0;
//}

//int main() {
//	int money;
//	float pay;
//	scanf("%d", &money);
//	if (money <= 800) {
//		pay = 0;
//	}
//	else if (money > 800 && money <= 4000) {
//		pay = (money - 800) * 0.14;
//	}
//	else {
//		pay = money * 0.11;
//	}
//	printf("%.2f", pay);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//    int x;
//    float y;
//    printf("Input x:");
//    scanf("%d", &x);
//    if (x > 0) {
//        y = exp(-x);
//    }
//    else if (x == 0) {
//        y = 1;
//    }
//    else if (x < 0){
//        y = -exp(x);
//    }
//    printf("y=%.6f", y);
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    float t, h, w;
//    printf("Please enter h,w:");
//    scanf("%f,%f", &h, &w);
//    t = w / (h * h);
//    if (t < 18) {
//        printf("t=%.6f\tLower weight!\n");
//    }
//    else if (t >= 18 && t < 25) {
//        printf("t=%.6f\tStandard weight!\n");
//    }
//    else if (t >= 25 && t < 27) {
//        printf("t=%.6f\tHigher weight!\n");
//    }
//    else {
//        printf("t=%.6f\tToo fat!\n");
//    }
//    return 0;
//}
//

//#include  <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    char sex;			//孩子的性别
//    char sports;			//是否喜欢体育运动
//    char diet;			//是否有良好的饮食习惯
//    float myHeight;			//孩子身高
//    float faHeight;			//父亲身高
//    float moHeight;			//母亲身高
//    /*********begin**********/
//    printf("Are you a boy(M) or a girl(F)?");
//    getchar();
//    scanf("%s", &sex);
//    if (sex != 'm' && sex != 'M' && sex != 'f' && sex != 'F') {
//        printf("\nInput sex error!\n");
//    }
//    printf("\nPlease input your father's height(cm):");
//    getchar();
//    scanf("%f", &faHeight);
//    printf("\nPlease input your mother's height(cm):");
//    getchar();
//    scanf("%f", &moHeight);
//    if (sex == 'm' || sex == 'M') {
//        myHeight = (faHeight + moHeight) * 0.54;
//    }
//    else if (sex == 'f' || sex == 'F') {
//        myHeight = (faHeight * 0.923 + moHeight) / 2;
//    }
//    else {
//        printf("\nInput sex error!\n");
//    }
//    printf("\nDo you like sports(Y/N)?");
//    getchar();
//    scanf("%c", &sports);
//    if (sports == 'Y' || sports == 'y') {
//        myHeight = myHeight * 1.02;
//    }
//    else if (sports == 'N' || sports == 'n') {
//        myHeight = myHeight;
//    }
//    else {
//        printf("\nInput sex error!\n");
//    }
//    printf("\nDo you have a good habit of diet(Y/N)?");
//    getchar();
//    scanf("%c", &diet);
//    if (diet == 'Y' || diet == 'y') {
//        myHeight = myHeight * 1.015;
//    }
//    else if (diet == 'N' || diet == 'n') {
//        myHeight = myHeight;
//    }
//    else {
//        printf("\nInput sex error!\n");
//    }
//    printf("\nYour future height will be %.6f(cm)\n", myHeight);
//
//    /**********end***********/
//    return 0;
//}

//
//int main()
//{
//    float data1, data2;
//    char  op;
//    /*********begin**********/
//    float result;
//    printf("Please enter the expression: ");
//    scanf("%f", &data1);
//    scanf(" %c", &op);
//    scanf("%f", &data2);
//    if (data2 == 0) {
//        printf("Division by zero!");
//        return -1;
//    }
//    switch (op) {
//    case'+':
//        result = data1 + data2;
//        break;
//    case'-':
//        result = data1 - data2;
//        break;
//    case'X':
//    case'x':
//    case'*':
//        result = data1 * data2;
//        op = '*';
//        break;
//    case'/':
//        result = data1 / data2;
//        break;
//    default:
//        printf("Unknown operator!");
//        return -1;
//        break;
//    }
//    printf("%f %c %f = %f", data1, op, data2, result);
//    /**********end***********/
//    return 0;
//}


//#include<stdio.h>
//int main() {
//    int i, j;
//    for (i = 1; i <= 9; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d*%d=%d", j, i, i * j);
//            if (i == j) {
//                printf("\n");
//            }
//            else {
//                printf(" ");
//            }
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int i, j;
//    for (i = 1; i <= 9; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d*%d=%d", j, i, i * j);
//            if (i == j && i != 9) {
//                printf("\n");
//            }
//            else if (i == j && i == 9) {
//
//            }
//            else {
//                printf(" ");
//            }
//        }
//    }
//    return 0;
//}


#include <stdio.h>
//int main()
//{
//    int s = 0, count = 0, m = 1;
//    int num[10];
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &num[i]);
//        if (num[i] != 0) {
//            if (num[i] % 2 != 0) {
//                s += num[i];
//                count++;
//            }
//            else {
//                m *= num[i];
//            }
//        }
//        if (num[i] == 0) {
//            break;
//        }
//
//    }
//
//    printf("奇数平均值为%d,偶数乘积为%d", s / count, m);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //补充代码
//    int s = 0, count = 0, m = 1, temp, i = 1;
//
//    while (i <= 10)
//    {
//        scanf("%d", &temp);
//        if (temp % 2 != 0) {
//            s += temp;
//        }
//        else {
//            m *= temp;
//        }
//        i++;
//    }
//
//    printf("奇数平均值为%d,偶数乘积为%d", s / count, m);
//}

//#include<stdio.h>
//int main() {
//    int n;
//    float result = 0.0,i;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        result = result + (1 / i);
//    }
//    printf("%f", result);
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    //补充代码
//    int i = 100;
//    while (i <= 999) {
//        if (i % 5 == 0 && ((i / 10) % 10) == 5) {
//            printf("%d\t", i);
//        }
//        i++;
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    //补充代码
//    int i = 100, total = 0, count = 0;
//    for (; i <= 999; i++) {
//        if (i % 5 == 0 && ((i / 10) % 10) == 5) {
//            total++;
//        }
//    }
//    i = 100;
//    while (i <= 999) {
//        if (i % 5 == 0 && ((i / 10) % 10) == 5) {
//            if (count != total - 1) {
//                count++;
//                printf("%d\n", i);
//            }
//            else {
//                printf("%d", i);
//            }
//        }
//        i++;
//    }
//    return 0;
//}

//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int n;
//    scanf("%d", &n);
//    if (n >= 0 && n <= 100) {
//        for (int i = 1; i <= n; i++) {
//            printf("line%d: hello world!\n", i);
//        }
//    }
//    else {
//        printf("line: %d is wrong!", n);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int a, b;
//    scanf("%d%d", &a, &b);
//    for (int i = 1; i <= a; i++) {
//        for (int j = 1; j <= b; j++) {
//            printf("%c", 63 + j + i);
//        }
//
//        printf("\n");
//    }
//    return 0;
//}

//
//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int n, result = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        result += i;
//    }
//    printf("%d", result);
//    return 0;
//}


//求1 - n之间所有能被5整除的的累加和

//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int n,result = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        if (i % 5 == 0) {
//            result += i;
//        }
//    }
//    printf("%d", result);
//    return 0;
//}

//输入n值（n <= 8）, 输出1到n所有数阶乘值的累加和.假如输入4，则求1！ + 2！ + 3！ + 4！


//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int n, temp = 1, result = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        int j = 1;
//        while (j < i) {
//            temp *= j;
//            j++;
//        }
//        result += temp;
//        temp = 1;
//    }
//
//    printf("%d", result);
//    return 0;
//}


//从键盘读入6个整数存入数组，找出其中最大值及最小值


//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击w保存按钮!
//int main(int argLen, char** args) {
//
//    int i = 0, temp, max = 0, min = 0;
//    while (i < 6) {
//        scanf("%d", &temp);
//        if (temp > max) {
//            max = temp;
//        }
//        if (temp < min) {
//            min = temp;
//        }
//        i++;
//    }
//    printf("max=%d,min=%d", max, min);
//    return 0;
//}


//输入两个正整数m和n(m>1且m<=n)，输出[m,n]区间的所有素数。
//要求自定义函数isPrime(i),功能是判断整数i是否素数。;


//#include<stdio.h>
//#include<math.h>
//bool isPrime(int i);
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int m, n;
//    scanf("%d%d", &m, &n);
//    for (int i = m; i <= n; i++) {
//        if (isPrime(i)) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//
//bool isPrime(int i) {
//    if (i == 1 || i == 2) return true;
//    for (int j = 2; j <= sqrt(i); j++) {
//        if (i % j == 0) {
//            return false;
//        }
//    }
//    return true;
//}

//#include<stdio.h>
//#include<math.h>
//int isPrime(int i);
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int m, n;
//    int count1 = 0, count2 = 0;
//    scanf("%d%d", &m, &n);
//    for (int i = m; i <= n; i++) {
//        if (isPrime(i)) {
//            count1++;
//        }
//    }
//    for (int i = m; i <= n; i++) {
//        if (isPrime(i)) {
//            printf("%d", i);
//            count2++;
//            if (count2 < count1) {
//                printf(" ");
//            }
//        }
//    }
//    return 0;
//}
//
//int isPrime(int i) {
//    if (i == 1 || i == 2) return 1;
//    for (int j = 2; j <= sqrt(i); j++) {
//        if (i % j == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}


//输入一个大于1的正整数，判断其是否为素数（只能被1和其本身整除的正整数）。

//如果用户输入合法的正整数(int类型)，则判断该数是否为素数，是输出'Y', 不是输出'N'；

//如果用户输入小于等于1的数，则输出“input error”。


//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//
//    int i;
//    scanf("%d", &i);
//    if (i <= 0) {
//        printf("input error");
//        return 0;
//    }
//    bool boolean = true;
//    for (int j = 2; j <= sqrt(i); j++) {
//        if (i == 1 || i == 2) {
//            break;
//        }
//        if (i % j == 0) {
//            printf("N");
//            return 0;
//        }
//    }
//    if (boolean) {
//        printf("Y");
//    }
//    return 0;
//}





//#include<stdio.h>
//
//// 注意, 代码不会自动保存, 请手动点击保存按钮!
//int main(int argLen, char** args) {
//    int count = 0;
//    float a, eps, temp = 0.0, abs = 0.0, sqrt = 0.0;
//    scanf("%f%f", &a, &eps);
//    temp = a / 2;
//    sqrt = temp;
//    do{
//        sqrt = (temp + (a / temp)) / 2;
//        abs = temp - sqrt;
//        if (abs < 0) {
//            abs = -abs;
//        }
//        if (abs > eps) {
//            temp = sqrt;
//        }
//        count++;
//    } while (abs > eps);
//    sqrt = (sqrt + temp) / 2;
//    printf("%.4f %d", sqrt, count);
//    return 0;
//}



//int main(int argc, char* argv[]) {
//	double a, eps, x0, x1, z;
//	int count;
//	scanf("%lf,%lf", &a, &eps);
//	x0 = a / 2;
//	for (count = 1;; count++) {
//		x1 = 0.5 * (x0 + a / x0);
//		z = x1 - x0;
//		if (z < 0) {
//			z = -z;
//		}
//		if (z < eps) {
//			break;
//		}
//		if (z > eps) {
//			x0 = x1;
//		}
//
//	}
//	printf("%.4lf %d", (x1 + x0) / 2, count);
//	return 0;
//}

//
//#include<stdio.h>
//#include<math.h>
//int main() {
//    bool isPrime(int x);
//    int x;
//    scanf("%d", &x);
//    if (isPrime(x)) {
//        printf("True");
//    }
//    else {
//        printf("False");
//    }
//    return 0;
//}
//bool isPrime(int x) {
//    if (x == 1 || x == 2) {
//        return true;
//    }
//    for (int i = 2; i <= sqrt(x); i++) {
//        if (x % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}


//#include<stdio.h>
//#include<math.h>
//int main() {
//    void funA(int x);
//    int x;
//    scanf("%d", &x);
//    int i;
//    for (i = 1;; i++) {
//        int num = x / pow(10,i);
//        if (num == 0) {
//            break;
//        }
//    }
//    printf("%d", i);
//    //funA(x);
//    return 0;
//}
////void funA(int x) {
////    int i;
////    //for (i = 1;; i++) {
////    //    if (x / (pow(10, i)) == 0) {
////    //        break;
////    //    }
////    //}
////    //printf("%d", i);
////}

//编写一个函数，从一组数中找出其中的奇数。
//要求从键盘输入n, 表示数组元素个数，再依次输入数组元素内容，通过调用函数，查找其中的奇数，并输出。
//输入举例：
//5
//5 6 8 9 2
//输出举例：
//奇数数组为：5, 9


//#include<stdio.h>
//#include<stdlib.h>
//int* odd(int n, int* num);
//int main() {
//    int n;
//    int* oddold;
//    scanf("%d", &n);
//    oddold = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &oddold[i]);
//    }
//    int* oddnew = odd(n, oddold);
//    free(oddold);
//    printf("奇数数组为：");
//    for (int j = 0; j < sizeof(oddnew) / sizeof(oddnew[0]); j++) {
//        printf("%d", oddnew[j]);
//        if (j < sizeof(oddnew) / sizeof(oddnew[0]) - 1) {
//            printf(",");
//        }
//    }
//    return 0;
//}
//int* odd(int n, int* num) {
//    int m = 0;
//    int* returnNum;
//    returnNum = (int*)malloc(n * sizeof(int));
//    for (int k = 0; k < n; k++) {
//        if (num[k] % 2 != 0) {
//            returnNum[m] = num[k];
//            m++;
//        }
//    }
//    return returnNum;
//}



//从键盘输入n，通过调用函数，输出大于n的连续6个素数。
//输入举例：
//10
//输出举例：
//11 13 17 19 23 29

//#include<stdio.h>
//#include<math.h>
//void isPrime(int n);
//int main() {
//    int n;
//    scanf("%d", &n);
//    isPrime(n);
//    return 0;
//}
//void isPrime(int n) {
//    int count = 0, re = 0;
//    if (n < 2) {
//        printf("2 ");
//        count++;
//    }
//    for (int i = n;; i++) {
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0) {
//                re = 0;
//                break;
//            }
//            else {
//                re = 1;
//            }
//        }
//        if (re) {
//            printf("%d", i);
//            count++;
//            if (count < 6) {
//                printf(" ");
//            }
//        }
//        if (count == 6) {
//            break;
//        }
//    }
//}