#include <iostream>
#include <windows.h>

using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int count =0;
void drow (){
system("cls");
for(int r=0;r<3;r++)
{
    cout<<"----------------------------"<<endl;
    for(int c=0;c<3;c++)
    {
        cout<<"|    "<<matrix[r][c]<<"   ";
    }
    cout<<"|";
    cout<<endl;
}
    cout<<"----------------------------\n"<<endl;
}
//**************************************************************
void reblace()
{
    char p;
    cout<<"Enter your position ( "<<player<<" ):";
    cin>>p;

    while(p!='1'&&p!='2'&&p!='3'&&p!='4'&&p!='5'&&p!='6'&&p!='7'&&p!='8'&&p!='9')
    {
        cout<<"\nThis position is not found"<<endl;
        cout<<"Enter other position ( "<<player<<" ):";
        cin>>p;
        count--;
    }

    for(int r=0;r<3;r++)
{
    for(int c=0;c<3;c++)
    {
        if(matrix[r][c]==p)
        {
            matrix[r][c]=player;
        }
    }
}
if(player=='X')
    player='O';
else
    player='X';
}
//**************************************************************

int main()
{
    while(1)
    {
        drow();
        reblace();
        count++;
        if(matrix[0][0]==matrix[0][1]&&matrix[0][1]==matrix[0][2])
        {
            drow();
            cout<<"player "<<matrix[0][1]<<" is win"<<endl;
            break;
        }

        else if(matrix[1][0]==matrix[1][1]&&matrix[1][1]==matrix[1][2])
        {
            drow();
            cout<<"player "<<matrix[1][1]<<" is win"<<endl;
            break;
        }
        else if(matrix[2][0]==matrix[2][1]&&matrix[2][1]==matrix[2][2])
        {
            drow();
            cout<<"player "<<matrix[2][0]<<" is win"<<endl;
            break;
        }
        else if(matrix[0][0]==matrix[1][0]&&matrix[1][0]==matrix[2][0])
        {
            drow();
            cout<<"player "<<matrix[1][0]<<" is win"<<endl;
            break;
        }
        else if(matrix[0][1]==matrix[1][1]&&matrix[1][1]==matrix[2][1])
        {
            drow();
            cout<<"player "<<matrix[1][1]<<" is win"<<endl;
            break;
        }
        else if(matrix[0][2]==matrix[1][2]&&matrix[1][2]==matrix[2][2])
        {
            drow();
            cout<<"player "<<matrix[1][2]<<" is win"<<endl;
            break;
        }
        else if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
        {
            drow();
            cout << "player " << matrix[1][1] << " is win" << endl;
            break;
        }
        else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
        {
            drow();
            cout << "player " << matrix[1][1] << " is win" << endl;
            break;
        }
        if (count == 9)
    {
        cout << "\nIt is a draw "<< endl;
        break;
    }
    }
    return 0;
}
