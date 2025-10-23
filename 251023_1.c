#include <stdio.h>
#include <stdlib.h>

double adc_to_voltage(int adc, float Vref);
double voltage_to_distance(double voltage, float k);

int main(void)
{
    int N;
    int adc[N];
    float Vref;
    float k;

    printf("N: ");
    scanf("%d", &N);
    printf("\nadc: ");
    for(int i=0; i<N; i++)
    {
        scanf("%d", &adc[i]);
    }
    printf("\nVref: ");
    scanf("%f", &Vref);
    printf("\nk(>=0.01): ");
    scanf("%f", &k);

    printf("\nADC\t->");
    for(int i=0; i<N; i++)
    {
        printf("%5d", adc[i]);
    }

    printf("\n전압(V)\t->");
    for(int i=0; i<N; i++)
    {
        double voltage = adc_to_voltage(adc[i], Vref);
        printf("%.2lf ", voltage);
    }

    printf("\n거리(cm)->");
    for(int i=0; i<N; i++)
    {
        double voltage = adc_to_voltage(adc[i], Vref);
        double distance = voltage_to_distance(voltage, k);

        printf("%.2lf ", distance);
    }

}

double adc_to_voltage(int adc, float Vref)
{
    double voltage;
    voltage = (double)adc / 1023 * Vref;
    //voltage = adc / 1023.0 * Vref;
    return voltage;
}

double voltage_to_distance(double voltage, float k)
{
    double distance;
    distance = k / voltage;
    
    return distance;
}
