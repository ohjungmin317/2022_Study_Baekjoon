/*���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6��(lj, e, ?, nj, a, k)�� �̷���� �ִ�. �ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

d?�� ������ �ϳ��� ���ĺ����� ���̰�, d�� ?�� �и��� ������ ���� �ʴ´�. lj�� nj�� ���������̴�. �� ��Ͽ� ���� ���ĺ��� �� ���ھ� ����. */

#include<stdio.h>
#include<string.h>

int main() 
{
    char arr[101]; // ���ǿ� ù �ٿ� 100���� �ܾ ���´�
    scanf("%s",arr);
    
    int len = strlen(arr);
    int sum = strlen(arr);
    
    for(int i=0; i<len; i++){ // ũ�ξ�Ƽ���� ��� ����� ���� if �� else if�� �̿��ؼ� ���
        if(arr[i] == 'c' || arr[i]== 's' || arr[i]== 'z'){ // 'c' 's' 'z'�� ������
            if(arr[i+1] == '=' || arr[i+1] == '-') // '=' '-'�� ������ �Ǹ� ũ�ξ�Ƽ�� ���� �Ǵ��ϰ� sum���� ����
            sum --;
        }
        else if(arr[i] == 'n' || arr[i] == 'l'){ // 'n' 'l'�� ������ �ǰ�
            if(arr[i+1]=='j') //  �״��� �� 'j' �̸� ũ�ξ�Ƽ�� ����̱⿡ sum���� ���� 
            sum--;
        }
        else if(arr[i]=='d'){ // ���ڿ� 'd'�� ������ �ǰ�
            if(arr[i+1]=='-') // �� ���� ���ڿ� '-'�� ������ �Ǹ� sum���� ����
            sum--;
            else if(arr[i+1]=='z' && arr[i+2]=='=') // 'z'�� �ְų� '='�� ���� �ÿ��� sum���� ���� 
            sum--;
        }
    }
    printf("%d\n",sum);
}