#include <stdio.h>
// scanf 사용 시 SDL 꺼줘야함
void main()
{
	int price = 0; // 품목 가격 정수형 변수 선언 및 초기화
	int quantity = 0; // 판매 수량 정수형 변수 선언 및 초기화
	int discount = 0;// 할인율 정수형 변수 선언 및 초기화
	int total = 0; // 총 금액
	int realTotal = 0; // 실제 금액
	int tax = 0; // 세금
	int result = 0; // 판매 이익

	// 1. 판매 내용 입력
	// 1.1 품목에 대한 가격 입력
	printf("품목에 대한 가격 : ");
	scanf("%d", &price);

	// 1.2 판매 수량 입력
	printf("판매 수량 입력 : ");
	scanf("%d", &quantity);

	// 1.3 할인율 입력
	printf("할인율 입력 (%%) : "); // % 출력하려면 %% 두개 입력해줘야함
	scanf("%d", &discount);

	// 2. 판매 내용 계산
	// 2.1 품목 가격과 판매 수량을 이용해 판매 금액 계산
	total = price* quantity;

	// 2.2 판매 금액에 할인율 적용하여 실 판매 금액 계산
	realTotal = total* (discount / 100.f); // 연산자 우선순위 주의 () 묶어주기
	// discount, 100 int 형이라서 0이 됨 float으로 형변환 해줘야함.
	// 100 뒤에 100.f 로 실수로 바꿔줌

	// 2.3 실 판매 금액을 통해 세금 계산 (10%)
	tax = realTotal * 0.1;

	// 2.4 판매 이익 계산
	result = realTotal - tax;

	// 3. 결과를 출력
	// 3.1 총 판매 금액 출력
	printf("\n\n");
	printf("---------- 총 판매 금액 ----------\n");
	printf("가격 : %d, \t 수량 : %d\n", price, quantity); // \t 는 탭 키 누른 것과 같음
	printf("판매 금액 : %d\n\n", total);

	// 3.2 실 판매 금액 출력 (할인율 적용 후)
	printf("\n\n");
	printf("---------- 실 판매 금액 ----------\n");
	printf("할인율 : %d, \t 실판매금액 : %d\n", discount, realTotal); // \t 는 탭 키 누른 것과 같음

	// 3.3 세금과 판매 이익 출력
	printf("\n\n");
	printf("---------- 판매 이익 ----------\n");
	printf("판매 이익 : %d\n", result); // \t 는 탭 키 누른 것과 같음
	printf("세     금 : %d\n\n", tax);
	printf("--------------------------------\n");
	printf("합     계 : %d\n\n", result + tax);
}