# Coding_Test CHAPTER 3 그리디
- 당장 좋은 것만 선택하는 그리디
- 현재 상황에서 지금 당장 좋은 것만 고르는 방법
- 현재의 선택이 나중에 미칠 영향에 대해서는 고려하지 않는다.
- 그리디 알고리즘은 정렬 알고리즘과 자주 짝을 이뤄 출제된다.

# Coding_Test CHAPTER 3-1 거스름돈
당신은 음식점의 계산을 도와주는 점원이다. 카운터에는 거스름돈으로 사용할 500원, 100원, 50원, 10원짜리 동전이 무한히 존재한다고 가정한다. 손님에게 거슬러 줘야 할 돈이 N원일 때 거슬러 줘야 할 동전의 최소 개수를 구하라. 단, 거슬러 줘야 할 ~~돈은 N의~~ 돈 N은 항상 10의 배수이다.

# 내가 생각한 방법
## 필요한 변수
1. 거스름돈 N
2. 동전의 개수 Coin_Count
3. 동전의 가격 값 Coin_Value
## 알고리즘
재귀함수 활용

함수 활용

### 함수 (coin)

N-Coin_Value 가 음수나 0이 되지 않는 조건에서 실행

실행이 진행될 때 마다 Coin_Count += 1

- 음수가 된다면 Coin_Value를 낮추어 다시 실행
- N = Coin_Value가 된다면 Coin_Count += 1 후 종료



# review를 보고 수정한 방법

## 필요한 변수
1. 거스름돈 N
2. 동전의 개수 Coin_Count
3. 동전의 가격 값 Coin_Value [500, 100, 50, 10]

## 알고리즘
- for 문을 활용하여 Coin_Value의 값을 하나씩 사용한다.
- 500원 부터 N을 나눈 나머지 값을 N으로 수정한다.
- 나눈 몫의 정수부분이 해당 동전의 개수가 된다.
- N이 0이 되면 for문을 조기종료 시킨다.