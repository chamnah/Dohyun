// 01. Grammar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

// 한 줄 주석 : 프로그램에서 무시되는 구문 / 보통 설명이나 쓰고 싶은 메모 남기는 용도

/*
여러줄 주석

주석 처리
*/

#include <stdio.h>  
//전처리기 : 빌드 과정에서 가장 먼저 실행된다.
/*
#이 붙은 문법을 보통 전처리기라고 한다.
#include(포함하다) :
#define 정의하다 : #define MAX_NUM 100
#pragma once
*/

// 정수를 반환시키겠다.
void main() // 메인 함수 - 실제 프로그램이 구동되는 곳
{
    printf("Hello World");
    //"" : 문자열은 ""안에 넣어야된다. 
    //printf("Hello \nWorld");
    //printf("Hello \tWorld");
    //printf("Hello World\a");

    // \n :  개행문자 한칸 아래로 줄 바꿈
    // \t :  띄어쓰기 tab 기능 생각
    // \a :  비프음
}

// 오늘의 숙제
// 오늘 배운 printf 복습 해오기
// 컴퓨터 구조 - CPU / 메모리(RAM) / HDD - 조사해보기

// 빌드 단계
//

