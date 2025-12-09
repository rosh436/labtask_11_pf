#include<stdio.h>
struct flightInfo{
    int flightNo;
    char departure[20];
    char destination[20];
    int seat;
};
void bookSeat(struct flightInfo *flight, int *B);
void displayDetail(struct flightInfo *flight, int Bookaseat);
int main(){
    int Bookaseat;
    struct flightInfo flight;
    printf("Enter the total no of seats. ");
    scanf("%d", &flight.seat);
    bookSeat(&flight, &Bookaseat);    //pass by reference
    if(flight.seat < Bookaseat){
        printf("Not enough seats.\n");
        Bookaseat = 0; 
    }
    else{
        flight.seat = flight.seat - Bookaseat;
    }         
    displayDetail(&flight, Bookaseat);
    return 0;
}
void bookSeat(struct flightInfo *flight, int *B){
    printf("Enter the flight no: ");
    scanf("%d", &flight->flightNo);
    printf("Enter the departure city: ");
    scanf("%s", &flight->departure);
    printf("Enter the destination city: ");
    scanf("%s", &flight->destination);    
    printf("Enter the no of seats you want to book: ");
    scanf("%d", B);   //as B already holds the address
}
void displayDetail(struct flightInfo *flight, int Bookaseat){
    printf("The flight no is %d \n", flight->flightNo);
    printf("The departure city is %s\n", flight->departure);
    printf("The destination city is %s\n", flight->destination);
    printf("The booked seats are %d\n", Bookaseat);
    printf("The Remaining seats are %d\n", flight->seat);
}
