// Write a program that use a structure to hold 
//information about movies, such as title, genre, director, release year,
//and rating. Write a program that allows users to add new movies, 
//search for movies by genre, and display all movie
//details.
#include<stdio.h>
#include<string.h>
struct movieInfo{
    char director[20];
    int year;
    int rating;
    char genre[20];    //romance, comedy, thriller
    char title[20];
};
void addMovie(struct movieInfo movies[], int size);
void searchMovie(struct movieInfo movies[], int size);
void displayMovies(struct movieInfo movies[], int size);
int main(){
    int size, choice;
    printf("Enter the books you want to add of movies: ");
    scanf("%d", &size);
    struct movieInfo movies[100];
    addMovie(movies, size);
    searchMovie(movies, size);
    displayMovies(movies, size);
    getchar();
    getchar();
return 0;
}
void addMovie(struct movieInfo movies[], int size){
    int i;
        for(i = 0; i < size; i++){
            printf("Movie %d\n", i+1);
            printf("Enter the title: ");
            scanf("%s", movies[i].title);  
            printf("Enter the genre: ");
            scanf("%s", movies[i].genre);
            printf("Enter the director: ");
            scanf("%s", movies[i].director);
            printf("Enter the release year: ");
            scanf("%d", &movies[i].year);
            printf("Enter the rating: ");
            scanf("%d", &movies[i].rating);
        }
}
void searchMovie(struct movieInfo movies[], int size){
    if(size == 0) {
        printf("No movies available to search.\n");
        return;
    }
    int i, found = 0;
    char search[20];
    printf("Enter the genre you want to search: ");
    scanf("%s", search);
    for(i = 0; i < size; i++){
        if(strcmp(movies[i].genre, search)==0){
            found = 1;
            printf("\n--- Movie Found ---\n");
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Genre: %s\n", movies[i].genre);
            printf("Release Year: %d\n", movies[i].year);
            printf("Rating: %d\n\n", movies[i].rating);
            
        }
    }
    if(!found){
        printf("Not found.\n");
        
    }

}
void displayMovies(struct movieInfo movies[], int size){
    if(size == 0) {
        printf("No movies available to display.\n");
        return;
    }
    int i;
    printf("\n--- All Movies ---\n");
    for(i = 0; i < size; i++){
        printf("Book no %d\n", i+1);
        printf("Title: %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Genre: %s\n", movies[i].genre);
        printf("Release year: %d\n", movies[i].year);
        printf("Rating: %d\n", movies[i].rating);
    }

}
