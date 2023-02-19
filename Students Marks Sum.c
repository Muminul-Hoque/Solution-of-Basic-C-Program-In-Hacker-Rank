#include<stdio.h>

int main()
{
    int number_of_student,i;
    int result=0;

    scanf("%d",&number_of_student);
    int marks[number_of_student];
    char gender;
    for(i=0; i<=number_of_student; i++) {
        scanf("%d",&marks[i]);
    }
    scanf("%c",&gender);





    if (gender == 'b') {
                for(i=0;i<number_of_student;i=i+2)
    {
       result=result+marks[i];
    }

        printf("%d",result);
    }
     else if(gender == 'g') {
                        for(i=1;i<number_of_student;i=i+2)

       result=result+marks[i];
        printf("%d",result);
    }
    else{
        printf("Invalid");
    }



    }



