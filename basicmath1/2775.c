/*��� �ݻ�ȸ�� �����ϴ� ���� �����ϴ� ����� �̹� ��ȸ�� �γ�ȸ���� �ǰ� �;� �� ���� ������� �ҷ� ��� �ݻ�ȸ�� �����Ϸ��� �Ѵ�.

�� ����Ʈ�� ���ָ� �Ϸ��� ������ �ִµ�, ��a���� bȣ�� ����� �ڽ��� �Ʒ�(a-1)���� 1ȣ���� bȣ���� ������� ���� �ո�ŭ ������� ������ ��ƾ� �Ѵ١� �� ��� ������ �� ��Ű�� ���;� �Ѵ�.

����Ʈ�� ����ִ� ���� ���� ��� ���ֹε��� �� ��� ������ ��Ű�� �Դٰ� �������� ��, �־����� ���� ���� k�� n�� ���� k���� nȣ���� �� ���� ��� �ִ��� ����϶�. ��, ����Ʈ���� 0������ �ְ� �������� 1ȣ���� ������, 0���� iȣ���� i���� ���.*/

#include<stdio.h>
int main()
{
    int i,j,k,n,s;
    int arr[15][15]={ 0, }; // 1<= arr <= 14
    
    for(i=0; i<15; i++)
    arr[0][i]=i; // 0���� ���� �ʱ�ȭ �� �� i ������ ä��� ��
    
    for(i=1; i<15; i++){
        for(j=1; j<15; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1]; // �� ��ȭ���� keypoint
        }
    }
    
    scanf("%d",&s);
    
    for(i=0; i<s; i++){
        scanf("%d %d",&k, &n);
        
        printf("%d\n",arr[k][n]);
    }
}