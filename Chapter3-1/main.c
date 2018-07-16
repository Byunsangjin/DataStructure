//
//  main.c
//  Chapter03-1
//
//  Created by sjbyun on 2018. 7. 16..
//  Copyright © 2018년 변상진. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

int main(int argc, const char * argv[]) {
    List list;
    int data;
    int sum = 0; // 각 리스트 값을 합
    
    //리스트 초기화
    ListInit(&list);
    
    // 1~9까지 정수를 리스트에 저장
    for(int i=0;i<10;i++){
        LInsert(&list, i);
    }
    
    // 리스트에 저장된 값을 순차적으로 참조하여 합을 계산
    if(LFirst(&list, &data)){
        sum += data;
        while(LNext(&list, &data)){
            sum += data;
        }
    }
    // 합 출력
    printf("sum = %d\n", sum);
    
    // 2의 배수 또는 3의 배수에 해당하는 값을 모두 삭제
    if(LFirst(&list, &data)){
        if(data%2==0 || data%3==0){
            LRemove(&list);
        }
        while(LNext(&list, &data)){
            if(data%2==0 || data%3==0){
                LRemove(&list);
            }
        }
    }
    
    // 리스트에 저장된 데이터를 순서대로 출력
    if(LFirst(&list, &data)){
        printf("%d\n", data);
        while(LNext(&list, &data)){
            printf("%d\n", data);
        }
    }
    
    return 0;
}
