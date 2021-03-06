#include <stdio.h>
/*
다항식(polynomial)을 구성하고 있는 정보를 Data로 저장하기
저장할 필수 정보: 다항식의 차수, 각 항의 계수
*/

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MAX_DEGREE 101

typedef struct POLYNOMIAL_STRUCT {
    int degree;
    float coef[101];
} polynomial;

// C = A+B 여기서 A와 B는 다항식이다. polynomial 다항식 반환
polynomial poly_add1(polynomial A, polynomial B)
{
    polynomial C; // 결과 다항식
    int Apos = 0, Bpos = 0, Cpos = 0; // 배열 인덱스 변수
    int degree_a = A.degree;
    int degree_b = B.degree;
    C.degree = MAX(degree_a, degree_b); // 결과 다항식 차수

    while (Apos <= A.degree && Bpos <= B.degree) {
        if (degree_a > degree_b) { // A항 > B항
            C.coef[Cpos++] = A.coef[Apos++];
            degree_a--;
        } else if (degree_a == degree_b) { // A항 == B항
            C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
            degree_a--;
            degree_b--;
        } else { // B항 > A항
            C.coef[Cpos++] = B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
}

void print_poly(polynomial p)
{
    for (int i = p.degree; i > 0; --i)
        printf("%3.1fx^%d + ", p.coef[p.degree - i], i);
    printf("%3.1f \n", p.coef[p.degree]);
}

int main(void)
{
    polynomial a = { 5, { 3, 6, 0, 0, 0, 10 } };
    polynomial b = { 4, { 7, 0, 5, 0, 1 } };
    polynomial c;

    print_poly(a);
    print_poly(b);
    c = poly_add1(a, b);
    printf("=====================================================================\n");
    print_poly(c);
    return 0;
}