#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int choice;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    do
    {
        printf("\n1. Find a Character\n");
        printf("2. Replace a Character\n");
        printf("3. Delete a Character\n");
        printf("4. Reverse the String\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{ // Find a Character
                char ch;
                printf("Enter character to find: ");
                scanf(" %c",&ch);

                int found = 0;
                for (int i = 0; str[i] != '\0'; i++)
                {
                    if (str[i]==ch)
                    {
                        printf("Character '%c' found at position %d\n",ch,i);
                        found = 1;
                        break;
                    }
                    
                }
                if(!found){
                    printf("Character '%c' not found!\n",ch);
                }
                break;
        }
        case 2:{ // Replace Character 
                char oldChar, newChar;
                printf("Enter character to replace: ");
                scanf(" %c",&oldChar);
                printf("Enter New character: ");
                scanf(" %c",&newChar);

                for (int i = 0; str[i] != '\0'; i++)
                {
                    if (str[i]==oldChar)
                    {
                        str[i]=newChar;
                    }
                }
                printf("Updated String: %s\n",str);
                break;
        }
        case 3:{// Delete Character
                char delChar;
                printf("Enter character to delete: ");
                scanf(" %c",&delChar);


                int j = 0;
                char newStr[100];
                for (int  i = 0; str[i] != '\0'; i++)
                {
                    if (str[i]!=delChar)
                    {
                        newStr[j++] = str[i];
                    }
                }
                newStr[j] = '\0';
                strcpy(str,newStr);
                printf("Updated string: %s\n",str);
                break;
        }
        case 4:{// Reverse String
                int len = strlen(str);
                for (int i = 0; i < len/2; i++)
                {
                    char temp = str[i];
                    str[i] =str[len - 1 - i];
                    str[len - 1 - i] = temp;
                }
                printf("Reversed string:%s\n",str);
                break;
        }
        case 5:{// Convert to Uppercase
                for (int i = 0; str[i] != '\0'; i++)
                {
                    str[i] = toupper(str[i]);
                }
                printf("Uppercase string: %s\n",str);
            break; 
        }
        case 6:{// Convert to Lowercase
                for (int i = 0;str[i] != '\0'; i++)
                {
                    str[i] = tolower(str[i]);
                }
                printf("Lowercase string: %s\n",str);
            break;

        }
        case 7:{//Exiting Code
                printf("Exiting Program...\n");
            break;
        }
        default:
            printf("Invalid choice! Try again...\n");
    }
    } while (choice != 7);
     return 0;
}