#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,choice;
	int program=0;
	int menu=0;
	
	
	printf("Pliktrologiste ton Prwto Arithmo:");
	scanf("%d", &num1);
	printf("\nPliktrologiste ton deutero arithmo:");
	scanf("%d",&num2);
	printf("\nEpilekste Thn Praksi pou Epithimeite:\n");
	printf("\n1. Prosthesi\n2. Afairesh\n3. Pollaplasiasmos\n4. Diairesh\n\n");
	scanf("%d", &choice);
	
	
	switch(choice){
		case 1:
			printf("\nProsthesi: %d\n", num1+num2);
			break;
		
		case 2:
		    printf("\nAfairesh: %d\n", num1-num2);
			break;
		
		case 3:
		    printf("\nPollaplasiasmos: %d\n", num1*num2);
			break;
			
		case 4:
		    printf("\nDiairesh: %d\n", num1/num2);
			break;
			
			default:
			printf("\nMi egkiri epilogi\n");
			break;
			}
	
	
	while (program==0){
        printf("\n1. Prosthesi\n2. Afairesh\n3. Pollaplasiasmos\n4. Diairesh\n5. Eksodos\n6. Monos h Zygos\n");
        scanf("%d" , &menu);
        
        if (menu==1) {
            printf("Epileksate Prosthesi.\n");
			printf("\nPliktrologiste 2 Arithmous: ");
	        scanf("%d%d", &num1,&num2);
	        printf("\nProsthesi: %d\n", num1+num2);
        }
        
        else if (menu==2) {
            printf("Epileksate Afairesh.\n");
			printf("\nPliktrologiste 2 Arithmous: ");
	        scanf("%d%d", &num1,&num2);
	        printf("\nAfairesh: %d\n", num1-num2);
        }
        
        else if (menu==3) {
            printf("Epileksate Pollaplasiamo.\n");
			printf("\nPliktrologiste 2 Arithmous: ");
	        scanf("%d%d", &num1,&num2);
	        printf("\nPollaplasiasmo: %d\n", num1*num2);
        }
        
        else if (menu==4) {
            printf("Epileksate Diairesh.\n");
			printf("\nPliktrologiste 2 Arithmous: ");
	        scanf("%d%d", &num1,&num2);
	        printf("\nDiairesh: %d\n", num1/num2);
        }
        
        else if (menu==5) {
            printf("\nEpileksate Eksodo.\n");
            program=1;
        }
        
        else if (menu==6) {
        	printf("\nPliktrologiste Enan Arithmo: ");
            scanf("%d", &num1);
            (num1 % 2 == 0) ? printf("%d \nO Arithmos Einai Zugos.\n", num1) : printf("%d \nO Arithmos Einai Monos.\n", num1);
		}
        
        else {
            printf("\nPliktrologiste Mia Egkiri Timi\n");    
        }
    }
			
		
		
		return 0;		
}	
