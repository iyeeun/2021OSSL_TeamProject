///////////////////////////////////////////////////////////////////////
///////////////////// 공동 편집 영역 //////////////////////////////////
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "manager.h"
#include "essential.h"

int main(void)
{
    Node* head = NULL;
    int menu;

    while(1)
    {
        menu = printMenu();

        switch(menu)
        {

//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
            // 종료
            case 0:
                clear(head);
                return 0;
            // 추가
            case 1:
                head = createCourse(head);
                printf("추가되었습니다.\n");
                break;
            // 읽기
            case 2:
                if(empty(head)) 
                    printf("오류 : 추가된 강의가 없습니다!\n");

                else 
                    readCourse(head);
                break;
            // 수정
            case 3:
                break;
            // 삭제
            case 4:
                if(empty(head)) 
                    printf("오류 : 추가된 강의가 없습니다!\n");
                else {
                    head = deleteCourse(head, selectCourseNo(head));
                    printf("삭제되었습니다.\n");
                }
                break;
            //저장
            case 5:
                break;
            //불러오기
            case 6:
                break;
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
            case 7:
                searchName(head);
                break;
            case 8:
                searchCredit(head);
                break;
            case 9:
                searchGrade(head);
                break;
        }
    }
}