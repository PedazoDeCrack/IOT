#include <stdio.h>
#include <stdlib.h>

#define LEN 1024

void stream_char_test(){
    FILE *fout, *fin;
    char line[LEN +1];
    int c;

    fout  =fopen("test_file_char.txt", "wa");
    printf("File descriptor of test_file_char.txt is %d\n", fileno(fout));
    
    fin =fdopen(0, "r");
    if(fout == (FILE *)NULL)
    exit(-1);
    

    do{
        c= fgetc(fin);
        fputc(c, fout);
    }while(c!= EOF);

    fclose(fout);s

}
int main(){
    stream_char_test();
}
