#include <windows.h>
#include <stdio.h>
 
void ShowMenu(int iItem)
{
    system("cls");
    printf("%s1 - 1-st item\n",iItem == 1 ? ">" : " ");
    printf("%s2 - 2-nd item\n",iItem == 2 ? ">" : " ");
    printf("%s3 - 3-rd item\n",iItem == 3 ? ">" : " ");
    printf("%s4 - 4-th item\n",iItem == 4 ? ">" : " ");
    printf("%s5 - 5-th item\n",iItem == 5 ? ">" : " ");
}
 
int main()
{
    int iItem = 1;//Отвечает какой пункт меню активен в данный момент
    int nLast = 5;//Отвечает какой индекс у последнего пункта меню
    ShowMenu(iItem);
    while(TRUE)
    {
        if(GetAsyncKeyState(VK_UP))
        {
            keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);//Отжимаем кнопку
            if(0 < iItem - 1)
                iItem = iItem - 1;
            else
                iItem = nLast;
            ShowMenu(iItem);
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);//Отжимаем кнопку
            if(iItem < nLast)
                iItem = iItem + 1;
            else
                iItem = 1;
            ShowMenu(iItem);
        }
        if(GetAsyncKeyState(VK_RETURN))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);//Отжимаем кнопку
            ShowMenu(iItem);
            switch(iItem)
            {
            case 1:
                printf("Run 1-st item of menu\n");
                break;
            case 2:
                printf("Run 2-nd item of menu\n");
                break;
            case 3:
                printf("Run 3-rd item of menu\n");
                break;
            case 4:
                printf("Run 4-th item of menu\n");
                break;
            case 5:
                printf("Run 5-th item of menu\n");
                break;
            }
        }
    }
    return 0;
}