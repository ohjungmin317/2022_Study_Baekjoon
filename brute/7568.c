/*�츮�� ����� ��ġ�� Ű�� ������, �� �� ���� ������ ǥ���Ͽ� �� ����� �Űܺ����� �Ѵ�. � ����� �����԰� x kg�̰� Ű�� y cm��� �� ����� ��ġ�� (x, y)�� ǥ�õȴ�. �� ��� A �� B�� ��ġ�� ���� (x, y), (p, q)��� �� �� x > p �׸��� y > q �̶�� �츮�� A�� ��ġ�� B�� ��ġ���� "�� ũ��"�� ���Ѵ�. ���� ��� � A, B �� ����� ��ġ�� ���� (56, 177), (45, 165) ��� �Ѵٸ� A�� ��ġ�� B���� ū ���� �ȴ�. �׷��� ���� �ٸ� ��ġ���� ũ�⸦ ���� �� ���� ��쵵 �ִ�. ���� ��� �� ��� C�� D�� ��ġ�� ���� (45, 181), (55, 173)�̶�� �����Դ� D�� C���� �� ���̰�, Ű�� C�� �� ũ�Ƿ�, "��ġ"�θ� �� �� C�� D�� ������ ���溸�� �� ũ�ٰ� ���� �� ����.

N���� ���ܿ��� �� ����� ��ġ ����� �ڽź��� �� "ū ��ġ"�� ����� ���� ��������. ���� �ڽź��� �� ū ��ġ�� ����� k���̶�� �� ����� ��ġ ����� k+1�� �ȴ�. �̷��� ����� �����ϸ� ���� ��ġ ����� ���� ����� ���� ���� �����ϴ�. �Ʒ��� 5������ �̷���� ���ܿ��� �� ����� ��ġ�� �� ����� ǥ�õ� ǥ�̴�.*/
#include<stdio.h>
int main()
{
    int arr[50][2]; // n�� �ִ� 50 Ű / ������ �Է�
    int num;
    int cnt;
    
    scanf("%d",&num);
    
    for(int i=0; i<num; i++){
        scanf("%d %d",&arr[i][0],&arr[i][1]); // �ο����� ���� Ű�� ������ �Է� 0-> Ű 1-> ������
        
    }
    
    for(int i=0; i<num; i++){
        cnt=0; // cnt�� ��� �ʱ�ȭ ������Ѵ�.
        for(int j=0; j<num; j++){
            if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1]) // ū���� ������ cnt�� ���� ���� ���������ش�.
                cnt++;
        }
        printf("%d ",cnt+1); // ���� �迭�� �濡 +1�� ����� ������ ���� ���´�.
    }
    
    
}