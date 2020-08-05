#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;
const int n = 3;
string mas[n][n];
int a,b,g,k,mass[10],l,doj,win;
pair<int, int> p;
pair <int, int> umniy(int mass[n][n],string ochered, int winn){
    string mass1[3][3];
    pair<int, int> l;
    for(int i = 0; i < n ; i++){
        for(int a = 0; a < n ; a++){
            if(mass[i][a]=="_" ){
                if(ochered=="X"){
                    for(int g = 0; g < n; g++){
                        for(int l = 0; l < n; l++){
                            mass1[g][l]=mass[g][l];
                        }
                    }
                    mass1[i][a]=ochered;
                    l=umniy(mass1,"O",winn);
                }else{
                    for(int g = 0; g < n; g++){
                        for(int l = 0; l < n; l++){
                            mass1[g][l]=mass[g][l];
                        }
                    }
                    mass1[i][a]=ochered;
                    l=umniy(mass1,"X",winn);
                }
            }
        }
    }
}
string znak,zn;
int winner(){
    doj=0;
    if(mas[0][0]==mas[1][1] && mas[0][0]==mas[2][2] && (mas[0][0]=="X"||mas[0][0]=="O")){
            cout<<mas[0][0]+" is winner";
            if(mass[0][0]=="X"){
                return 0;
            }else{
                return 1;
            }
        }
        if(mas[0][2]==mas[1][1] && mas[0][2]==mas[2][0] && (mas[2][0]=="X"||mas[2][0]=="O")){
            cout<<mas[2][0]+" is winner";
            if(mass[2][0]=="X"){
                return 0;
            }else{
                return 1;
            }
        }
        for(int o = 0; o < n; o++){
             if(mas[o][0]==mas[o][1] && mas[o][0]==mas[o][2] && (mas[o][0]=="X"||mas[o][0]=="O")){
            cout<<mas[o][0]+" is winner";
            if(mass[o][0]=="X"){
                return 0;
            }else{
                return 1;
            }
        }
        }
        for(int o = 0; o < n; o++){
             if(mas[0][o]==mas[1][o] && mas[0][o]==mas[2][o] && (mas[0][o]=="X"||mas[0][o]=="O")){
            cout<<mas[0][o]+" is winner";
            if(mass[0][o]=="X"){
                return 0;
            }else{
                return 1;
            }
        }
        }
        for(int a = 0; a < n; a++){
        for(int i = 0; i < n; i++){
        if((mas[a][i]=="X"||mas[a][i]=="O")){
            doj++;
        }
        }
        }
        if(doj==9){
            cout<<"ничья";
            return 0;
        }
        return 1;
}
int main()
{
        for(int i = 0; i < n; i++){
        for(int a = 0; a < n; a++){
            mas[i][a]="_";
        }
    }
    doj=0;
    while(true){
    k=0;
    l=1;
    for(int i = 0; i < 10; i++){
        mass[i]=4531+i;
    }
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<"Режим человек с человеком";
        cout << endl;
    znak="X";
    for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
    while(true){
        cin>>a>>b;
        if(a<n && b<n && mas[a][b]=="_"){
            mas[a][b]=znak;
            if(znak=="X"){
                znak="O";
            }else{
                znak="X";
            }
        }else{
            cout<<"You are stupid";
            cout << endl;
        }
        for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
        win=winner();
        if(win==0 || win==1){
            return 0;
        }
    }
    }
    if(a==1 && b==1){
        cout<<"Режим бот с ботом";
        cout << endl;
    znak="X";
    for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
    while(true){
            a=rand()%3;
            b=rand()%3;
            while(mas[a][b]!="_"){
                a=rand()%3;
            b=rand()%3;
            }
        cout<<a<<" "<<b;
            cout << endl;
        if(a<n && b<n && mas[a][b]=="_"){
            mas[a][b]=znak;
            if(znak=="X"){
                znak="O";
            }else{
                znak="X";
            }
        }else{
            cout<<"You are stupid";
            cout << endl;
        }
        for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
        win=winner();
        if(win==0 || win==1){
            return 0;
        }
    }
    }
    if(a==0 && b==1){
 cout<<"Режим бот с человеком";
        cout << endl;
        cout<<"Кем вы хотите быть?";
        cout << endl;
        cin>>znak;
        zn="X";
    for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
    while(true){
            if(znak=="O"){
            a=rand()%3;
            b=rand()%3;
            while(mas[a][b]!="_"){
                a=rand()%3;
            b=rand()%3;
            }
            cout<<a<<" "<<b;
            cout << endl;
            }else{
                cin>>a>>b;
            }
        if(a<n && b<n && mas[a][b]=="_"){
            mas[a][b]=zn;
            if(znak=="X"){
                znak="O";
            }else{
                znak="X";
            }
            if(zn=="X"){
                zn="O";
            }else{
                zn="X";
            }
        }else{
            cout<<"You are stupid";
            cout << endl;
        }
        for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                cout<<"|";
                cout<<mas[i][a];
            }
            cout<<"|";
            cout << endl;
        }
        win=winner();
        if(win==0 || win==1){
            return 0;
        }
    }
    }
    }
    return 0;
}
