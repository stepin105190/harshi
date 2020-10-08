#include<number_conversion.h>
long int Bin_to_Dec(long int bin)
{
    int rem,sum=0,i=0;
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
return sum;
}
long int Bin_to_Oct(long int bin)
{
    int i=0,rem,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",remain[i]);
    }
}
long int Bin_to_Hex(long int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remain[i]);
        }
    }
}
long int Dec_to_Bin(long int dec)
{
   int rem, temp=1;
   long binarynum=0;
   while(dec!=0)
{
     rem=dec%2;
     dec=dec/2;
     binarynum=binarynum+rem*temp;
     temp=temp*10;
}
printf("%ld",binarynum);
}

long int Dec_to_Oct(long int dec)
{
   int octalnum=0,temp=1;
  while(dec!=0)
{
  octalnum=octalnum+(dec%8)*temp;
  dec=dec/8;
  temp=temp*10;
}
printf("%ld",octalnum);
}

long int Dec_to_Hex(long int dec)
{
    int i=1,j,temp;
    char hexadecimalnum[100];
    long int remainder,quotient;
    quotient=dec;
    while(quotient!=0)
{
   temp=quotient%16;
    if(temp < 10)
    temp=temp+48;
    else
    temp=temp+55;
    hexadecimalnum[i++]=temp;
    quotient=quotient/16;
}
for(j=i-1;j>0;j--)
{
printf("%c",hexadecimalnum[j]);
}
}


long int Oct_to_Bin(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }

    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);

    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

long int Oct_to_Dec(long int oct)
{
    int decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
}

long int Oct_to_Hex(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rem[i]);
        }

    }
}
void Hex_to_Bin(char hex[])
{
    int i=0;
    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }

}

void Hex_to_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

}

void Hex_to_Oct(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
