int main ()
{
    int choice;
    char str[100], str2[100];
    printf("Enter a string: ");
    gets(str);

    printf("Menu: \n");
    printf("1] Copy one string to another one by one character\n");
    printf("2] Find the string length\n");
    printf("3] Compare two strings\n");
    printf("4] Reverse the string\n");
    printf("5] Concat 2 strings\n");

    printf("Select which one you want to execute: ");

    scanf("%d", &choice);

    if (choice == 1)
    {
        for (int i = 0; str[i] != '\0'; i++)
            str2[i] = str[i];
        printf("Copied string: %s", str2);
    }
    else if (choice == 2)
    {
        int strl = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            strl++;
        }
        printf("Length of the string: %d", strl);
    }
    else if (choice == 3)
    {
        int num=0, k=0;
        char strnew[100];
        printf("Enter another string to be compared to the first: ");
        scanf("%s", strnew);
        while (str[k] == strnew[k] && str[k] != '\0')
            k++;
        if (str[k] > strnew[k])
            printf("First string greater than second string");
        else if (str[k] < strnew[k])
            printf("Second string greater than first string");
        else
            printf("Both strings are equal");
    }
    else if (choice == 4)
    {
        char reverse[100];
        int strl=0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            strl++;
        }
        for (int i = 0; str[i] != '\0'; i++)
        {
            int j = strl-1;
            for (int j = strl-1; j>= 0; j--)
            {
                int c = i + j, d = strl-1;

                if (c == (strl-1))
                    reverse[i] = str[j];
            }
        }
        printf("Reverse of the string: %s", reverse);
    }
    else if (choice == 5)
    {
        char strc[100];
        printf("Input another string: ");
        scanf("%s", strc);
        int strl=0, strl2=0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            strl++;
        }
        printf("\n%d", strl);
        for (int i = 0; strc[i] != '\0'; i++)
        {
            strl2++;
        }
        printf("\n%d", strl);
        int sum=strl+strl2;
        char newstr[sum];
        for (int i = 0; i<strl ; ++i)
        {
            newstr[i] = str[i];
        }
        printf("\nConcatenated string: %s", newstr);
        for (int j = strl; j < sum; ++j)
            {
                int c = j - strl;
                newstr[j] = strc[(c)];
            }
        printf("\nConcatenated string: %s", newstr);
    }
    else if (choice == 6)
    {
        
    }
}