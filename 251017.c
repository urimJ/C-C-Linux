#include <stdio.h>
int AllTen(int a){
    int b=0;

    if(a==1){
        b=1;
    }
    else if(a==2){
        b=2;
    }
    else if(a==3){
        b=3;
    }
    else if(a==4){
        b=4;
    }
    else if(a==5){
        b=5;
    }else if(a==6){
        b=6;
    }else if(a==7){
        b=7;
    }else if(a==8){
        b=8;
    }else if(a==9){
        b=9;
    }else if(a==10){
        b=10;
    }
    return b;
}

int Efficient(int a){

    int b=0;

    if(a<=5){
        if(a<=3){
            if(a==1){
                b=1;
            }else if(a==2){
                b=2;
            }else{
                b=3;
            }
        }
        else if(a>4){
            if(a==4){
                b=4;
            }
            else{
                b=5;
            }
        }
    }
    else{
        if(a<=7){
            if(a==6){
                b=6;
            }
            else{
                b=7;
            }
        }
        else{
            if(a==8){
                b=8;
            }
            else if(a==9){
                b=9;
            }
            else{
                b=10;
            }
        }
    }
    return b;
}

int main(void)
{
    /* 사전 선정 정보
    평균전류: l_load [A]
    평균속도: vel [km/h]
    예비율: R [0~1]
    */
    int l_load, vel, R;

    /* 배터리 정보
    공칭전압: V [V]
    용량(Capacity): C [Ah]
    시스템 효율: eta [0~1]
    */ 
    int V, C;
    float eta;
    
    // 사용 가능 에너지(Wh)
    float E_usable;
    
    // 소비 전력(W), 런타임(h), 주행 거리(km)
    float P, t, d;

    l_load = 6;
    vel = 4;
    R = 0.1;

    V = 25.2;
    C = 6;
    eta = 0.95;

    E_usable = V * C * eta * (1-R);
    P = (V * l_load) / eta;
    t = E_usable / P;
    d = vel * t;

    printf("사용 가능 에너지(Wh): %f\n", E_usable);
    printf("소비 전력(W): %f\n", P);
    printf("런타임(h): %f\n", t);
    printf("주행거리(km): %f\n", d);

    // https://imdron.com/product/detail.html?product_no=939

    return 0;
}