///week11-1.cpp
///���/��� function
#include <stdio.h>
///�e�� �w�q �禡
///�e�X�ӬOint���
 ///�e�i�h���a���b
int addnum(int a,int b){
    printf("�A�禡addnum()��,�o��Ѽ�a:%d b:%d\n", a, b);
    int ans = a+b;
    printf("��X����%d�nreturn�X�h��\n",ans);
    return ans; ///���X�Ӫ����G�ǥX�h
}
int main(){
///�D�n���禡�B�D�{��
    printf("�b main() �I�s�ϥ� addnum() \n");
    int ans = addnum(2,3);
    printf("�o�쵪��:%d\n", ans);
}
