# [Bronze 2] 에어팟 - 25495
___
### **성능 요약**  
**메모리: 2020KB, 시간: 0ms**
___
### **분류**
**<p>구현, 시뮬레이션</p>**
___
### **문제설명**  
**<p>에어팟에 여러 개의 핸드폰을 다음과 같은 방법으로 연결하고자 한다.
에어팟은 한 번에 하나의 핸드폰에만 연결이 가능하다.
에어팟을 새로운 핸드폰에 연결할 때마다, 기존 핸드폰과의 연결이 끊어지고, 에어팟 배터리 2퍼센트를 소모한다.
이미 연결되어 있는 핸드폰에 다시 연결을 시도할 때, 직전 배터리 소모량의 2배만큼 배터리를 소모하게 된다.
누적 배터리 소모량이 100퍼센트 이상이 될 경우, 에어팟을 충전시켜야 하기 때문에 현재 핸드폰과 에어팟의 연결을 해제한다. 이 경우 에어팟의 배터리 소모량은 0이 되고, 다음 핸드폰부터는 새로운 에어팟에 연결한다.
핸드폰의 종류는 $1$부터 $9$ 사이의 숫자로 나타내어지고, 에어팟에 연결한 순서대로 주어진다. 에어팟을 핸드폰에 연결한 횟수 $N$과 각 차례에 연결한 핸드폰 종류 
$A_i$가 주어질 때, 현재 에어팟 배터리의 소모량을 퍼센트 단위로 출력하시오.</p>**
___
### **입력**  
 > **<p>첫 번째 줄에는 에어팟에 핸드폰의 연결한 횟수 
$N$이 주어진다. ($1 \le N \le 1\,000$)두 번째 줄에는 정수 $A_1, A_2, \dots, A_N$이 공백으로 구분되어 주어진다. (
$1 \le A_i \le 9$) 핸드폰의 종류는 에어팟에 연결을 시도한 순서대로 주어진다.</p>**
 
 ___
### **출력**  
 > **<p>현재 에어팟의 배터리 소모량을 출력하시오.</p>**
 
 ____
 ##### [*링크열기*](https://www.acmicpc.net/problem/25495)