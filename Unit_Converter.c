//Project- Unit Converter
#include<stdio.h>
int main(){
    //For Character option
    void asciiToChar();
    void charToAscii();
    void upperCaseToLowerCase();
    void lowerCaseToLowerCase();

    //For Tempreture option
    void fahrenhitToCelcius();
    void celciusToFahrenhit();

    //For Length option
    void km_to_m();
    void inch_to_cm();
    void inch_to_feet();

    int a=0;//Global Variable
    printf("Press number to an option from below:\n1) Character\n2) Tempreture\n3) Length\n\n");//Tag
    printf("Enter a number for choose option: ");
    scanf("%d",&a);

    //For option 1) Character
    if(a==1){
        int b;//Local variable
        printf("Press number to an option from below:\n1) ASCII to Character\n2) Character to ASCII\n3) Uppercase to Lowercase\n4) Lowercase to uppercase\n\n");//Tag
        printf("Enter a number for choose option: ");
        scanf("%d",&b);
        
        if(b==1){
            // ASCII to Character
            asciiToChar();//Function invoked
        }
        else if(b==2){
            // Character to ASCII 
            charToAscii();//Function invoked
        }
        else if(b==3){
            //Uppercase to Lowercase
            upperCaseToLowerCase();//Function invoked
        }
        else if(b==4){
            //Lowercase to Uppercase
            lowerCaseToLowerCase();//Function invoked
        }
        else{
            printf("\n! Invalid Option Choosen :( ");
        }
    }

    //For option 2) Tempreture
    else if(a==2){
        int b;//Local variable
        printf("Press number to an option from below:\n1) Fahrenhit to celcius\n2) Celcius to Fahrenhit\n\n");//Tag
        printf("Enter a number for choose option: ");
        scanf("%d",&b);

        if(b==1){
            //Fahrenhit to Celcius
            fahrenhitToCelcius();//Function invoked
        }
        else if(b==2){
            //Celcius to Fahrenhit
            celciusToFahrenhit();
        }
        else{
            printf("\n! Invalid Option Choosen :( ");
        }
    }

    //For option 3) Length
    else if(a==3){
        int b;//Local variable
        printf("Press number to an option from below:\n1) km to m\n2) inch to cm\n3) inch to feet\n\n");//Tag
        printf("Enter a number for choose option: ");
        scanf("%d",&b);
        if(b==1){
            //km to meter
            km_to_m();//Function invoked
        }
        else if(b==2){
            //inch to cm
            inch_to_cm();//Function invoked
        }
        else if(b==3){
            //inch to feet
            inch_to_feet();//Function invoked
        }
        else{
            printf("\n! Invalid Option Choosen :( ");
        }
    }
    else{
        printf("\n! Invalid Option Choosen :( ");
    }

}

//User Defined Function
void asciiToChar(){
    int c=0;//Local Variable
    printf("Enter a ASCII value: ");
    scanf("%d",&c);        
    if(c>=0&&c<=127){
        printf("Character value is = %c",c);//Implicit type casting
    }
    else{
        printf("!ASCII value is out of range :(");
    }

}

void charToAscii(){
    char ch;//Local Variable
    printf("Enter a Character: ");
    scanf(" %c",&ch);
    printf("ASCII value is = %d",ch);//Implicit type casting
}

void upperCaseToLowerCase(){
    char ch;//Local Variable
    printf("Enter a Character: ");
    scanf(" %c",&ch);
    if(ch>=65&&ch<=90){
        printf("Lowercase Character is = %c",32+ch);//implicit type casting
    }
    else if(ch>=97&&ch<=122){
        printf("This character is lowercase character ");
    }
    else{
        printf("!This inputed value is not a character :(");
    }
}

void lowerCaseToLowerCase(){
    char ch;//Local Variable
    printf("Enter a Character: ");
    scanf(" %c",&ch);
    if(ch>=97&&ch<=122){
        printf("Uppercase Character is = %c",ch-32);//implicit type casting
    }
    else if(ch>=65&&ch<=90){
        printf("This character is uppercase character ");
    }
    else{
        printf("!This inputed value is not a character :(");
    }
}

void fahrenhitToCelcius(){
    float f;//Local Variable
    printf("Enter a value in fahrenhit unit: ");
    scanf("%g",&f);
    printf("%gC",((float)f-32)*((float)5/9));//implicit type casting
}

void celciusToFahrenhit(){
    float c;//Local Variable
    printf("Enter a value in fahrenhit unit: ");
    scanf("%g",&c);
    printf("%gF",((float)c*((float)9/5))+32);//implicit type casting
}

void km_to_m(){
    float km;//Local Variable
    printf("Enter a value in km unit: ");
    scanf("%g",&km);
    printf("%gm",km*1000);//implicit type casting
}

void inch_to_cm(){
    float inch;//Local Variable
    printf("Enter a value in inch unit: ");
    scanf("%g",&inch);
    printf("%gcm",inch*2.54);//implicit type casting
}

void inch_to_feet(){
    float inch;//Local Variable
    printf("Enter a value in inch unit: ");
    scanf("%g",&inch);
    printf("%gfeet",inch/12);//implicit type casting
}