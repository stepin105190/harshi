#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include "number_conversion.h"
#include "test_conversion.h"
int main()
{
    int op,num=1,check,res;
    long int bin,oct,dec;
    char hex[100];
    int i,j,space;

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while(num!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);

                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    check=check/10;
                }

                 res=Bin_to_Dec(bin); 
	printf("%d\n",res);
                 break;
                

            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }

               Bin_to_Oct(bin);
                	break;

            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);

                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }

               Bin_to_Hex(bin); break;

            case 4:
                
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Bin(dec); break;

            case 5:
               
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Oct(dec); break;

            case 6:
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Hex(dec); break;

            case 7:
                printf("\n***OCTAL TO BINARY***\n");
                A:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                res=Oct_to_Bin(oct); break;

            case 8:
                printf("\n***OCTAL TO DECIMAL***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
               Oct_to_Dec(oct); break;

            case 9:
                printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
               Oct_to_Hex(oct); break;
case 10:
                printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hex_to_Bin(hex); break;

            case 11:
                printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hex); break;

            case 12:
                printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                Hex_to_Oct(hex); break;

            default:
                printf("\n***INVALID NUMBER***\n");
                break;
        }
test_main();
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&num);

return 0;
}
}

