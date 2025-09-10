#include <stdlib.h>
#include <stdio.h>


#define ELEMENTS 3;
#define LEN 20;

typedef struct {

    int id;
    float data;
    char name[LEN];

}sAnalogData_t;

sAnalogData_t[ELEMENTS] = {
    {0, 3.14, "TEMPERATURE \0"},
    {1, 1.18, "Humidity\0"},
    {2, 23.5, "Humidity\0"},

};

void fwrite_test(){
    FILE *fout =fopen("AnalogData.bin","w");
    fwrite((void *)aData, sizeof(sAnalogData_t), ELEMENTS, fout);
    fclose (fout);
}

int main (){

    fwrite_test();

    return 0;
}

