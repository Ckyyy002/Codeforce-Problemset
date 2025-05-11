#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    year++;
    int a[4];

    if(year / 1000 == 9){
        a[0] = 9;
    }
    else if(year / 1000 == 8){
        a[0] = 8;
    }
    else if(year / 1000 == 7){
        a[0] = 7;
    }
    else if(year / 1000 == 6){
        a[0] = 6;
    }
    else if(year / 1000 == 5){
        a[0] = 5;
    }
    else if(year / 1000 == 4){
        a[0] = 4;
    }
    else if(year / 1000 == 3){
        a[0] = 3;
    }
    else if(year / 1000 == 2){
        a[0] = 2;
    }
    else if(year / 1000 == 1){
        a[0] = 1;
    }

    if(year % 1000 >= 900 && year % 1000 < 1000){
        a[1] = 9;
    }
    else if(year % 1000 >= 800 && year % 1000 < 900){
        a[1] = 8;
    }
    else if(year % 1000 >= 700 && year % 1000 < 800){
        a[1] = 7;
    }
    else if(year % 1000 >= 600 && year % 1000 < 700){
        a[1] = 6;
    }
    else if(year % 1000 >= 500 && year % 1000 < 600){
        a[1] = 5;
    }
    else if(year % 1000 >= 400 && year % 1000 < 500){
        a[1] = 4;
    }
    else if(year % 1000 >= 300 && year % 1000 < 400){
        a[1] = 3;
    }
    else if(year % 1000 >= 200 && year % 1000 < 300){
        a[1] = 2;
    }
    else if(year % 1000 >= 100 && year % 1000 < 200){
        a[1] = 1;
    }
    else{
        a[1] = 0;
    }

    if(year % 100 >= 90 && year % 100 < 100){
        a[2] = 9;
    }
    else if(year % 100 >= 80 && year % 100 < 90){
        a[2] = 8;
    }
    else if(year % 100 >= 70 && year % 100 < 80){
        a[2] = 7;
    }
    else if(year % 100 >= 60 && year % 100 < 70){
        a[2] = 6;
    }
    else if(year % 100 >= 50 && year % 100 < 60){
        a[2] = 5;
    }
    else if(year % 100 >= 40 && year % 100 < 50){
        a[2] = 4;
    }
    else if(year % 100 >= 30 && year % 100 < 40){
        a[2] = 3;
    }
    else if(year % 100 >= 20 && year % 100 < 30){
        a[2] = 2;
    }
    else if(year % 100 >= 10 && year % 100 < 20){
        a[2] = 1;
    }
    else{
        a[2] = 0;
    }

    if(year % 10 == 9){
        a[3] = 9;
    }
    else if(year % 10 == 8){
        a[3] = 8;
    }
    else if(year % 10 == 7){
        a[3] = 7;
    }
    else if(year % 10 == 6){
        a[3] = 6;
    }
    else if(year % 10 == 5){
        a[3] = 5;
    }
    else if(year % 10 == 4){
        a[3] = 4;
    }
    else if(year % 10 == 3){
        a[3] = 3;
    }
    else if(year % 10 == 2){
        a[3] = 2;
    }
    else if(year % 10 >= 1){
        a[3] = 1;
    }
    else{
        a[3] = 0;
    }

    while(a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] || a[2] == a[3]){
        if(a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] || a[2] == a[3]){
            a[3]++;
            if(a[3] > 9){
                a[3] = 0;
                a[2]++;
                if(a[2] > 9){
                    a[2] = 0;
                    a[1]++;
                    if(a[1] > 9){
                        a[1] = 0;
                        a[0]++;
                    }
                }
            }
        }
    }

    for(int i = 0; i < 4; i++){
        cout << a[i];
    }
}