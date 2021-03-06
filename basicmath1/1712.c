/*월드전자는 노트북을 제조하고 판매하는 회사이다. 노트북 판매 대수에 상관없이 매년 임대료, 재산세, 보험료, 급여 등 A만원의 고정 비용이 들며, 한 대의 노트북을 생산하는 데에는 재료비와 인건비 등 총 B만원의 가변 비용이 든다고 한다.

예를 들어 A=1,000, B=70이라고 하자. 이 경우 노트북을 한 대 생산하는 데는 총 1,070만원이 들며, 열 대 생산하는 데는 총 1,700만원이 든다.

노트북 가격이 C만원으로 책정되었다고 한다. 일반적으로 생산 대수를 늘려 가다 보면 어느 순간 총 수입(판매비용)이 총 비용(=고정비용+가변비용)보다 많아지게 된다. 최초로 총 수입이 총 비용보다 많아져 이익이 발생하는 지점을 손익분기점(BREAK-EVEN POINT)이라고 한다.

A, B, C가 주어졌을 때, 손익분기점을 구하는 프로그램을 작성하시오.*/
// A -> 고정비용 B -> 가변비용 C -> 노트북 가격

#include<stdio.h>
int main()
{
    int fixcost;
    int movecost;
    int sell_prd;
    
    scanf("%d %d %d",&fixcost,&movecost,&sell_prd);
    
    if(sell_prd<= movecost) printf("-1"); // 노트북 비용이 가변비용보다 작거나 같은 경우에는 이익이 나지 않기 때문에 문제에 제시한 것 처럼 -1로 나타내 준다.
    else printf("%d",fixcost/(sell_prd-movecost)+1); // 최초로 이익이 발생하는 판매량을 찾는 문제이기에 -> A(고정비용) + B(가변비용) * X(판매량) < C(노트북 가격) * x
                                                        // 위 식을 정리하면 x에 대한 값은 A/(C-B) 이고 최초 이기에 값에 상관없이 +1을 해주어서 식을 도출해내면 된다.
}