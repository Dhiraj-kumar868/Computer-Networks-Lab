/*WAP to store n books data such as title, author, publication, 
price etc using structures with dynamically memory allocation. 
Display all the books information of a particular author.*/


#include<stdio.h>
#include<stdlib.h>
 struct Book{
    char title[20];
    char author[20];
    char publication[20];
    float price;
};
int main(){
    struct Book *b1;
    int noOfBooks;
    printf("Enter the number of books: ");
    scanf("%d",&noOfBooks);
    b1=(struct Book*)malloc(noOfBooks*sizeof(struct Book));
    for(int i=0;i<noOfBooks;i++){
        printf("Enter the title,author,publication,price of book %d:",i+1);
        scanf("%s%s%s%f",&b1[i].title,&b1[i].author,&b1[i].publication,&b1[i].price);
    }
    for(int i=0;i<noOfBooks;i++){
        printf("Details of book %d",i+1);
        printf("\nTitle:%s\nAuthor:%s\nPublication:%s\nPrice:%f",b1[i].title,b1[i].author,b1[i].publication,b1[i].price);
        printf("\n\n\n");
    }
    free(b1);
    return 0;    
}