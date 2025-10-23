#include <stdio.h>

int main(void){

    printf("Hello World");

    /* 
    1. 기획 단계에서 선정하는 요소
    
    구동 바퀴 수: N = 2ea
    총 하중(질량): m = 200 [kg]
    안전계수: SF(Safety Factor) = 2.0 // 외력이 가해질 때 버티도록
    설계마진: DM(Design Margin) = 1.2
    
    2. 모터 정보
    
    바퀴 반지름: R [m]
    토크: t [M*m]
    감속비: G =1 (인휠모터(기어박스 없음))
    
    3. 상수 및 환경 조건

    구름저항게수: c = 0.018
    중력가속도: g = 9.81 [N*m]
    중량: W = m * g[N]

    4. 필요한 최소 견인력(안전계수 포함)
        F(min)

    5. 모터가 낼 수 있는 견인력
        F(motor)

    6. 모터 적정성 여부 판정
        F(min) < F(motor)
    */

    int N, m;
    float SF = 2.0;
    float DM = 1.2;

    float R, t;
    int G_int;
    float G_float;

    const float c = 0.018, g = 0.81;
    float W;

    float F_min, F_motor;

    printf("\n총 하중(kg): "); //1500
    scanf("%d", &m);
    printf("\n구동 바퀴 수: "); //4
    scanf("%d", &N);
    printf("\n감속비: "); //0.63
    scanf("%f", &G_float);
    printf("\n바퀴 반지름(m): "); //0.0965
    scanf("%f", &R);
    printf("\n토크[N*m]: "); //
    scanf("%f", &t);

    W = m*g;

    F_min = c* W * SF * DM;
    F_motor = (t*G_float)/R * N;

    printf("\n필요한 최소 견인력: %f", F_min);
    printf("\n모터가 낼 수 있는 견인력: %f", F_motor);

    return 0;
}