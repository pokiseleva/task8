#include "f.h"
//�������������� �������:��������� � ���� �� ������ ��������� ������ ��������� ���
int _statemenu;
void menu ()
{
    cout<< "�������� ��������:"<< endl
    << "(0) ����� �� ��������� "<<endl
    << "(1) �������� �������"<<endl
    << "(2) ������� �������"<<endl
    << "(3) ������� ������"<<endl
    << "(4) ��������� � ���� �� ������ ��������� ������ ��������� ���"<<endl
        << "�����:";
    cin >>_statemenu;
}

int main()
{SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    Derevo *koren = NULL;
int e,x,n,g;
    bool t = true;
    n=5;
    cout<<"C����� ������ �� 5 ���������"<<endl;
    for(int i=0;i<n;i++)
    {   x=rand()%20+1;
        Add(&koren, x);
       }
show(koren,7);
cout<<endl;

        menu();
    while (_statemenu!=0)
    {
        switch(_statemenu)
        {
            case 1:
            cout<<"������� ����� �������:";
            cin>>x;
        Add(&koren, x);
       show(koren,7);
            cout<<endl;
            menu();
            break;
            case 2:
cout<<"����� ������� �������?";
           cin>>e;
Delete(&koren, e);
show(koren,7);
    cout<<endl;

            menu();
            break;
            case 3:
               show(koren,7);
                cout<<endl;
            menu();
            break;
            case 4:
show(koren,7);
                cout<<endl;
                int d;
d=3;
ves2(koren,d);
 if (d==0) cout<<"�� � ����";
        if (d==1)cout<<"� ����";
        if (d==2) cout <<"��� ������ ���������";
 cout<<endl;
            menu();

            break;

    }}
    return 0;
}
