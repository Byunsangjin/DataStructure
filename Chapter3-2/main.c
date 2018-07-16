//
//  main.c
//  Chapter03-2
//
//  Created by sjbyun on 2018. 7. 16..
//  Copyright © 2018년 변상진. All rights reserved.
//

#include <stdio.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(int argc, const char * argv[]) {
    List list;
    NameCard * pcard;
    ListInit(&list);
    
    // 총 3명의 전화번호 정보를 앞서 구현한 리스트에 저장한다.
    pcard = MakeNameCard("변상진", "010-8697-3025");
    LInsert(&list, pcard);
    
    pcard = MakeNameCard("임은진", "010-2671-3025");
    LInsert(&list, pcard);
    
    pcard = MakeNameCard("변다혜", "010-4311-3025");
    LInsert(&list, pcard);
    
    // 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보를 출력
    if(LFirst(&list, &pcard)){
        if(!NameCompare(pcard, "변상진")){
            ShowNameCardInfo(pcard);
        }
        else{
            while(LNext(&list, &pcard)){
                if(!NameCompare(pcard, "변상진")){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }
    
    // 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 전화번호 정보를 변경
    if(LFirst(&list, &pcard)){
        if(!NameCompare(pcard, "변상진")){
            ChangePhoneNum(pcard, "010-8697-0000");
        }
        else{
            while(LNext(&list, &pcard)){
                if(!NameCompare(pcard, "변상진")){
                    ChangePhoneNum(pcard, "010-8697-0000");
                    break;
                }
            }
        }
    }
    
     // 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보를 삭제
    if(LFirst(&list, &pcard)){
        if(!NameCompare(pcard, "변다혜")){
            LRemove(&list);
        }
        else{
            while(LNext(&list, &pcard)){
                if(!NameCompare(pcard, "변다혜")){
                    LRemove(&list);
                    break;
                }
            }
        }
    }
    
    // 남아있는 모든 사람의 정보를 출력
    if(LFirst(&list, &pcard)){
        ShowNameCardInfo(pcard);
        
        while(LNext(&list, &pcard)){
            ShowNameCardInfo(pcard);
        }
    }
    
    return 0;
}
