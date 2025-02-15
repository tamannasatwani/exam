#include <stdio.h>
#include <string.h>

struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int n, i;  
    
    printf("Enter the number of mobiles: ");
    scanf("%d", &n);
    
    struct Mobile mobiles[n]; 

    for (i = 0; i < n; i++) {  
        printf("\nEnter details for Mobile %d:\n", i + 1);
        
        printf("Company Name: ");
        scanf(" %[^\n]", mobiles[i].company_name);  

        printf("Color: ");
        scanf(" %[^\n]", mobiles[i].color);

        printf("Model: ");
        scanf(" %[^\n]", mobiles[i].model);

        printf("Price: ");
        scanf("%f", &mobiles[i].price);
    }

    printf("\nList of Mobiles:\n");
    for (i = 0; i < n; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
    }

    return 0;
}

