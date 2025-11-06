#include <stdio.h>

int main(){
    FILE *fp;
    char cplt[80];
    char sect[20];
    
    fp = fopen("students.txt","w");
    if (fp == NULL){
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    printf("Complete Name: ");
    fgets(cplt, sizeof(cplt), stdin);
    
    printf("Section: ");
    fgets(sect, sizeof(sect), stdin);
    
    fprintf(fp, "Complete Name: %s", cplt);
    fprintf(fp, "Section: %s", sect);
    
    fclose(fp);
    printf("Information successfully saved to students.txt\n");

    fp = fopen("students.txt", "r");
    if  (fp==NULL){
        printf("Error opening file for reading!\n");
        return 1;
    }
    
        char fcplt [80];
        char fsec [80];
        fgets(fcplt, sizeof(fcplt), fp);
        fgets(fsec, sizeof(fsec), fp);
        printf("%s", fcplt);
        printf("%s", fsec);

        fclose(fp);
    return 0;
}