#include<stdio.h>
#pragma warning(disable:4996)

//코드업 문제 1028 풀이 ( 정수 1개 입력받아 그대로 출력하기2 ) (%u: 부호없는 10진수)
//main() {
//	unsigned int n;
//	scanf("%u", &n);
//	printf("%u", n);
//}

//코드업 문제 1029 풀이 (실수 1개 입력받아 그대로 출력하기)
//main() {
//    double d;
//    scanf("%lf", &d); // double(long float) 형식으로 입력
//    printf("%.11lf", d);
//    return 0;
//}

//코드업 문제 1030 풀이(정수 1개 입력받아 그대로 출력하기3)
//main() {
//	long long int n;
//	scanf("%lld", &n);
//	printf("%lld", n);
//	return 0;
//}

//코드업 문제 1031 풀이(10진 정수 1개 입력받아 8진수로 출력하기
//main() {
//	int n;
//	scanf("%d", &n);
//	printf("%o", n);
//	return 0;
//}

//코드업 문제 1032 풀이(10진 정수 입력받아 16진수로 출력하기1)
//main() {
//	int n;
//	scanf("%d", &n);
//	printf("%x", n);
//	return 0;
//}

//코드업 문제 1033 풀이(10진 정수 입력받아 16진수로 출력하기2 (대문자))(디테일 추가)
//main() {
//	int n;
//	printf("10진 정수를 입력하세요 : ");
//	scanf("%d", &n);
//	printf("%X", n);
//	return 0;
//}

//코드업 문제 1034 풀이 (8진 정수 1개 입력받아 10진수로 출력하기)
//main() {
//	int n;
//	scanf("%o", &n);
//	printf("%d", n);
//	return 0;
//}

//코드업 문제 1035 풀이 (16진 정수 1개 입력받아 8진수로 출력하기)
//main() {
//	int n;
//	scanf("%x", &n);
//	printf("%o", n);
//	return 0;
//}

//코드업 문제 1036 풀이 (영문자 하나 입력받아 10진수로 출력하기) (코드업에선 정확한 코드로 인식, VS에선 에러뜸)
//main() {
//	int n;
//	scanf("%c", &n);
//	printf("%d", n);
//	return 0;
//}

//코드업 문제 1037 풀이 (정수 입력받아 아스키 문자로 출력하기)
//main() {
//	int n;
//	scanf("%d", &n);
//	printf("%c", n);
//	return 0;
//}

//코드업 문제 1038, 1039 풀이 (정수 2개 입력받아 합 출력하기1,2)(같은 코드로 둘 다 해결가능)
//main() {
//	long long int a, b;
//	scanf("%lld %lld", &a, &b);
//	printf("%lld", a+b);
//	return 0;
//}

//코드업 문제 1040 풀이 ( 정수 1개 입력받아 부호 바꿔 출력하기)(변수명 바꾸니 해결됨;;;;)
//main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", -n);
//}

//코드업 문제 1041 풀이 ( 문자 1개 입력받아 다음 문자 출력하기)
//main() {
//	int n;
//	scanf("%c", &n);
//	printf("%c", n + 1);
//}

//코드업 문제 1042 풀이 (정수 2개 입력받아 나눈 몫 출력하기)
//main() {
//	int a ,b;
//	scanf("%d %d", &a ,&b);
//	printf("%d", a/b);
//}

//코드업 문제 1043 풀이 (정수 2개 입력받아 나눈 나머지 출력하기)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a % b);
//}

//코드업 문제 1044 풀이 (정수 1개 입력받아 1 더해 출력하기)(두개로 풀어봄)
//main() {
//	long long int a;
//	scanf("%lld", &a);
//	printf("%lld", ++a);
//}
//main() {
//	long long int a;
//	scanf("%lld", &a);
//	printf("%d", a+1);
//}

//코드업 문제 1045 풀이(정수 2개 입력받아 자동 계산하기 
//첫 줄에 합
//둘째 줄에 차,
//셋째 줄에 곱,
//넷째 줄에 몫,
//다섯째 줄에 나머지,
//여섯째 줄에 나눈 값을 순서대로 출력한다.
//(실수, 소수점 이하 셋째 자리에서 반올림해 둘째 자리까지 출력)(마지막 앞에 float 안찍어서 고생함)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", a + b, a - b, a * b, a / b, a % b, (float)a/b);
//}

//코드업 문제 1046 풀이 (정수 3개 입력받아 합과 평균 출력하기)
//main() {
//	int x, y, z;
//	scanf ("%d %d %d", &x, &y, &z);
//	printf("%d\n%.1f",x+y+z, (float)(x+y+z)/3);
//}

//코드업 문제 1047 풀이 (정수 1개 입력받아 2배 곱해 출력하기 ) 
//int a=10;
//printf("%d", a << 1); 10을 2배 한 값인 20 이 출력된다.
//printf("%d", a >> 1); 10을 반으로 나눈 값인 5 가 출력된다.
//printf("%d", a << 2); 10을 4배 한 값인 40 이 출력된다.
//printf("%d", a >> 2); 10을 반으로 나눈 후 다시 반으로 나눈 값인 2 가 출력된다.
//main() {
//	int a ;
//	scanf("%d", & a );
//	printf("%d" ,a << 1);
//}

//코드업 문제 1048 풀이 ( 한 번에 2의 거듭제곱 배로 출력하기) ( 왜 b를 넣으면 2의 b승인지 이해가 안됨 a의 b승 아닌가)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a << b);
//}

//코드업 문제 1049 풀이 ( 두 정수 입력받아 비교하기1)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a > b);
//}

//코드업 문제 1050 풀이 ( 두 정수 입력받아 비교하기 2)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a == b );
//}

//코드업 문제 1051 풀이 ( 두 정수 입력받아 비교하기 3)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", b >= a);
//}

//코드업 문제 1052 풀이 ( 두 정수 입력받아 비교하기 4)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a != b);
//}

//코드업 문제 1053 풀이 (참 거짓 바꾸기)
//main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", !a);
//}

//코드업 문제 1054 풀이 ( 둘다 참일 경우에만 참 출력하기)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a && b);
//}

//코드업 문제 1055 풀이 (하나라도 참이면 참 출력하기 )
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a&&!b)||(!a&&b));
//}

//코드업 문제 1056 풀이 (참/거짓이 서로 같을 때에만 참 출력하기)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a && b) || (!a&& !b));
//}

//코드업 문제 1057 풀이 (둘 다 거짓일 경우만 참 출력하기)
//main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", !a && !b);
//}

//코드업 문제 1058 풀이 ( 비트단위로 NOT 하여 출력하기)
//main() {
//	int a=1;
//	scanf("%d" ,& a);
//	printf("%d", ~a);
//}

//코드업 문제 1059 풀이 (비트단위로 AND 하여 출력하기) (1058부터 이해 제대로 안됨;)